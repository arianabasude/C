import cv2

cap=cv2.VideoCapture(0)
#0 for camera

while(True):
	ret,frame=cap.read()
	#True and Frame

	if(ret==True):
		# cv2.imshow('FrameTitle',frame) 

		#for gray color
		gray=cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
		cv2.imshow('FrameTitle',gray) 

		if(cv2.waitKey(1)&0xFF==ord('q')):
			break
	else:
		print("Cannot Capture")
		break

#When everything done, release the capture
cap.release()
cv2.destroyAllWindows()