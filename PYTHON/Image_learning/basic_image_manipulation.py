from PIL import Image, ImageColor

with Image.open("F2004.jpg") as image:
    #image = image.rotate(60,expand = 1,fillcolor = ImageColor.getcolor('teal','RGB'))

    #image_crop = image.crop(left_x, top_y, right_x, bottom_y)
    print(type(image))
    image = image.crop((0,150,image.size[0],400))
    image_flip_horizontal = image.transpose(Image.Transpose.FLIP_LEFT_RIGHT)
    image_flip_vertical = image_flip_horizontal.transpose(Image.Transpose.FLIP_TOP_BOTTOM)

    image_flip_vertical = image_flip_vertical.resize((6*image_flip_vertical.size[0],6*image_flip_vertical.size[1]))

    image_flip_vertical.show()
    image_flip_vertical.save("F2004_4K.jpg")
