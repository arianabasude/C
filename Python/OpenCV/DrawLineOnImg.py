import cv2
import numpy as np

img = cv2.imread('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaata.jpg',-1)
# 1 for color image
#0 grayscale
#-1 as it is

img=np.zeros([1000,1000,3],np.uint8)
#creates image with black backgroung
#[width,heigh,]

img=cv2.line(img,(0,0),(0,400),(255,255,100),600)
#img,pt1,pt2,color in blue-green-red,thick

img=cv2.arrowedLine(img,(0,0),(450,300),(255,255,255),50)
# #img,pt1,pt2,color in blue-green-red,thick

img=cv2.rectangle(img,(200,500),(600,700),(0,0,255),-1)
# #img,pt1,pt2,color in blue-green-red,thick

img=cv2.circle(img,(300,500),40,(0,100,255),-1)
# #img,center,radius,color in blue-green-red,thick,shift

img=cv2.putText(img,"We",(600,700),cv2.FONT_HERSHEY_SIMPLEX,4,(0,0,255),10,cv2.LINE_AA)
# #img,text,coordinate,font,fontsize,color in blue-green-red,thick,shift

cv2.imshow('ImageTitle',img)
cv2.waitKey(5000)
#0 for permantent
cv2.destroyAllWindows()

cv2.imwrite('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaataDrawLineOnImg.jpg',img)
