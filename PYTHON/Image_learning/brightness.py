import numpy as np
from numpy.fft import fft2, ifft2
from PIL import Image, ImageEnhance

image = Image.open("beach-009.jpg")
image = image.convert('HSV')

lut = np.asarray(image, dtype = int)

transpose = lut[..., 2]
threshold = np.max(transpose)
"""
curVal = 30

lut[..., 2] += curVal

curVal = 50
lut[..., 2] -= curVal
curVal = 70
lut[..., 2] += curVal
curVal = 90
lut[..., 2] -= curVal
curVal = 110
lut[..., 2] += curVal

"""
factor = 1.5
lut[..., 2] = np.clip(128 + factor * lut[...,2] - factor * 128, 0, 255).astype(np.uint8)
#lut[..., 2] = ((lut[..., 2] - lut[..., 2].min()) / (lut[..., 2].max()-lut[..., 2].min())) * 215
Image.fromarray(lut[..., 2].astype(np.uint8))


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
