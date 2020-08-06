import cv2

img = cv2.imread('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaata.jpg',0)
# 1 for color image
#0 grayscale
#-1 as it is
print(img)
cv2.imshow('ImageTitle',img)
cv2.waitKey(5000)
#0 for permantent
cv2.destroyAllWindows()

cv2.imwrite('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaata1.jpg',img)
