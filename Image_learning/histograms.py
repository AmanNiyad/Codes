from PIL import Image
import matplotlib.pyplot as plt
def RED(R): return '#%02x%02x%02x'%(R,0,0)
def GREEN(G): return '#%02x%02x%02x'%(0,G,0)
def BLUE(B):return '#%02x%02x%02x'%(0,0,B)
i=Image.open("/home/aman/Projects/Image_Editor/wallpaperbetter(1).jpg")
hst=i.histogram()
Red=hst[0:256]      # indicates Red
Green=hst[256:512]  # indicated Green
Blue=hst[512:768]   # indicates Blue
plt.figure(0)             # plots a figure to display RED Histogram
for i in range(0, 256):
    plt.bar(i, Red[i], alpha=0.3)
plt.figure(1)             # plots a figure to display GREEN Histogram
for i in range(0, 256):
    plt.bar(i, Green[i], color = GREEN(i),alpha=0.3)
plt.figure(2)             # plots a figure to display BLUE Histogram
for i in range(0, 256):
    plt.bar(i, Blue[i], color = BLUE(i),alpha=0.3)
plt.show()
