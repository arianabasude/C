import cv2
import numpy

#events =[i for i in dir(cv2) if 'EVENT' in i]
#print(events)
"""
['EVENT_FLAG_ALTKEY', 'EVENT_FLAG_CTRLKEY', 'EVENT_FLAG_LBUTTON', 
'EVENT_FLAG_MBUTTON', 'EVENT_FLAG_RBUTTON', 'EVENT_FLAG_SHIFTKEY', 
'EVENT_LBUTTONDBLCLK', 'EVENT_LBUTTONDOWN', 'EVENT_LBUTTONUP', 
'EVENT_MBUTTONDBLCLK', 'EVENT_MBUTTONDOWN', 'EVENT_MBUTTONUP', 
'EVENT_MOUSEHWHEEL', 'EVENT_MOUSEMOVE', 'EVENT_MOUSEWHEEL', 
'EVENT_RBUTTONDBLCLK', 'EVENT_RBUTTONDOWN', 'EVENT_RBUTTONUP']
"""

def clickEvent(event_name,x,y,flags,param):
	if(event_name==cv2.EVENT_LBUTTONDOWN):

		new_img=numpy.zeros((512,512,3),numpy.uint8)

		new_img[:]=[img[y,x,0],img[y,x,1],img[y,x,2]]
		cv2.imshow('ColorFrame',new_img)
		cv2.imwrite('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/MousePickColorFromImg.jpg',new_img)




img = cv2.imread('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/khaata.jpg',-1)
cv2.imshow('FrameTitle',img)
cv2.setMouseCallback('FrameTitle',clickEvent)
cv2.waitKey(0)
cv2.destroyAllWindows()

