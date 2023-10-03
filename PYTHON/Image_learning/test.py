from PIL import Image
from IPython.display import display

MyImg = Image.new( 'RGB', (250,250), "black")
#Imported_Img = Image.open('ImageName.jpg') 

pixels = MyImg.load()
for i in range(MyImg.size[0]):
    for j in range(MyImg.size[1]):
        pixels[i,j]=(100,100,100)
display(MyImg)
MyImg.show()
