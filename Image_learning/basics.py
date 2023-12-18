from PIL import Image

with Image.open("F2004.jpg") as image:
   #image.show()
   print(image.size[0])
   print(image.filename)
   print(image.format)
   print(image.format_description)

#image_blank = Image.new('RGBA',(700,360))
#image_blank.show()
