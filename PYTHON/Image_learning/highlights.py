import numpy as np
from PIL import Image
from scipy.signal import convolve2d

image = Image.open("beach-009.jpg")

#result = image.point(lambda i: (i-46)*255/(255-46) if(i > 46) else 0)

#result.show()

"""
def whatever(i):
    if(i<85):
        return (i-2*x)
#    elif(i>85 and i<=170):
#        return i
    else:
        return(i)
#result = image.point(lambda i: (i-170)*255/(255-170) if(i > 170) else 255)

#result.show()
#image.show()

x = 10
shadows = image.point(lambda i: whatever(i))

#shadows.show()

x = 20
shadows = image.point(lambda i: whatever(i))

#shadows.show()

x = 30
shadows = image.point(lambda i: whatever(i))

#shadows.show()
"""

def mean_values(transpose):
    kernel = np.ones((25,25))
    kernel[1,1] =0

    nsum = convolve2d(transpose, kernel, mode ='same', boundary='fill',fillvalue=0)
    nnei = convolve2d(np.ones(transpose.shape), kernel, mode ='same', boundary='fill',fillvalue=0)

    mean_arr = nsum/nnei
    return(mean_arr)

#image.show()
image = image.convert('HSV')

lut = np.asarray(image, dtype = int)
transpose = lut.T[2]
threshold = np.max(transpose)

mean_arr = mean_values(transpose)

lut.T[2] = [[transpose[i][j]-20 if mean_arr[i][j]<threshold/2 else transpose[i][j] for j in range(len(transpose[i]))] for i in range(len(transpose))]

image_new = Image.fromarray(lut.astype('uint8'), mode = 'HSV')
image_new = image_new.convert('RGB')
image_new.save('output.jpg')
