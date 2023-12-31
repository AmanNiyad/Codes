import numpy as np
from PIL import Image

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
#image.show()
image = image.convert('HSV')

lut = np.asarray(image, dtype = int)
print(lut.T[2])

lut.T[2] = lut.T[2] + 10

image_new = Image.fromarray(lut.astype('uint8'), mode = 'HSV')
image_new = image_new.convert('RGB')
image_new.save('output.jpg')
