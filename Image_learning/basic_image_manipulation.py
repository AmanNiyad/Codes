from PIL import Image, ImageColor

with Image.open("background_wallpaper_4k_8k___minimalist_landscape_by_jorgehardt_df934b2-pre.png") as image:
    #image = image.rotate(60,expand = 1,fillcolor = ImageColor.getcolor('teal','RGB'))

    #image_crop = image.crop(left_x, top_y, right_x, bottom_y)
    #print(type(image))
    #image = image.crop((0,150,image.size[0],400))
    #image_flip_horizontal = image.transpose(Image.Transpose.FLIP_LEFT_RIGHT)
    #image_flip_vertical = image_flip_horizontal.transpose(Image.Transpose.FLIP_TOP_BOTTOM)

    image = image.resize((2560,1440))

    image.show()
    image.save("WALLPAPER1.PNG")
