import numpy as np
from numpy.fft import fft2, ifft2
from PIL import Image, ImageEnhance

image = Image.open("beach-009.jpg")
image = image.convert('HSV')

lut = np.asarray(image, dtype = float)
lut1 = np.asarray(image, dtype = float)

print(lut[...,2])
print("-------------")
print(lut1[...,2])
print("--------------------------")

curVal = 90

lut[...,2] = lut1[..., 2]
lut[..., 2] = np.clip(lut[..., 2] + curVal, 0, 255)
print(lut[...,2])
print("-------------")
print(lut1[...,2])

print("--------------------------")
curVal = 20

lut[...,2] = lut1[..., 2]
lut[..., 2] = np.clip(lut[..., 2] + curVal, 0, 255)
print(lut[...,2])
print("-------------")
print(lut1[...,2])
"""
curVal = 50
lut[..., 2] -= curVal
curVal = 70
lut[..., 2] += curVal
curVal = 90
lut[..., 2] -= curVal
curVal = 110
lut[..., 2] += curVal
"""
#factor = 1.5
#lut[..., 2] = np.clip(128 + factor * lut[...,2] - factor * 128, 0, 255).astype(np.uint8)
#Image.fromarray(lut[..., 2].astype(np.uint8))


image_new = Image.fromarray(lut.astype('uint8'), mode = 'HSV')
image_new = image_new.convert('RGB')
"""
brightness_enhancer = ImageEnhance.Brightness(image)
image_new = brightness_enhancer.enhance(1.3)
brightness_enhancer = ImageEnhance.Brightness(image)
image_new = brightness_enhancer.enhance(0.8)
brightness_enhancer = ImageEnhance.Brightness(image)
image_new = brightness_enhancer.enhance(1.5)
brightness_enhancer = ImageEnhance.Brightness(image)
image_new = brightness_enhancer.enhance(0.6)
brightness_enhancer = ImageEnhance.Brightness(image)
image_new = brightness_enhancer.enhance(1.7)
"""
image_new.save('output.jpg')
