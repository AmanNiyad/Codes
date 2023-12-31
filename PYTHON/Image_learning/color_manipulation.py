from PIL import Image
from numpy import array

image = Image.open("beach-009.jpg")

print(image.mode)
red_channel = image.getchannel('R')


print(array(image).shape)
print(array(red_channel).shape)
