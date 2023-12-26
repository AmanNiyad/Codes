from PIL import Image, ImageColor

with Image.open("beach-009.jpg") as image:
    #image = image.rotate(60,expand = 1,fillcolor = ImageColor.getcolor('teal','RGB'))
    print(image.size)

    image_crop = image.crop((3, 3, 372, 797))
    #print(type(image))
    #image = image.crop((0,150,image.size[0],400))
    #image_flip_horizontal = image.transpose(Image.Transpose.FLIP_LEFT_RIGHT)
    #image_flip_vertical = image_flip_horizontal.transpose(Image.Transpose.FLIP_TOP_BOTTOM)

#    image = image.resize((2560,1440))

    image_crop.show()
