import cv2
import numpy

img = cv2.imread('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaata.jpg',-1)
img2=cv2.imread('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaata.jpg',-1)
print(img.shape) #return no of tuple of rows,columns andchanneels
print(img.size) #total no of pixels
print(img.dtype) #img datatype
"""
(1280, 832, 3)
3194880
uint8
"""
b,g,r=cv2.split(img)
img=cv2.merge((r,g,b))

part=img[100:300,400:500]
img[400:600,600:700]=part

# img=cv2.add(img,img2)
img=cv2.addWeighted(img,.8,img2,.2,0)


cv2.imshow('FrameTitle',img)
cv2.imwrite('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/ImageOperations.jpg',img)
cv2.waitKey(0)
cv2.destroyAllWindows()

