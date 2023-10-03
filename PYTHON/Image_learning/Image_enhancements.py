from PIL import Image, ImageEnhance

with Image.open('F2004.jpg') as image:
    colorEnhancer = ImageEnhance.Color(image)#vibrance
    contrastEnhancer = ImageEnhance.Contrast(image)#contrast
    brightnessEnhancer = ImageEnhance.Brightness(image)#brightness
    sharpnessEnhancer = ImageEnhance.Sharpness(image)#sharpness
    image = brightnessEnhancer.enhance(.2)
    image = colorEnhancer.enhance(2)
    image = contrastEnhancer.enhance(2)
    image = sharpnessEnhancer.enhance(1.1)
    image.show()
