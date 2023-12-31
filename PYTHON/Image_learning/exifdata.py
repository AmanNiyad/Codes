from PIL import Image

im = Image.open("beach-009.jpg")

exif_data = im._getexif()
print(exif_data)
