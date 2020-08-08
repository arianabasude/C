import cv2

cap=cv2.VideoCapture(0)
#0 for camera

print("WIDTH:HEIGHT:",cap.get(cv2.CAP_PROP_FRAME_WIDTH),cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
# WIDTH:HEIGHT: 1280.0 720.0
cap.set(cv2.CAP_PROP_FRAME_WIDTH,1000)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT,300)
print("WIDTH:HEIGHT:",cap.get(cv2.CAP_PROP_FRAME_WIDTH),cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
# WIDTH:HEIGHT: 960.0 540.0

while(cap.isOpened()):
	ret,frame=cap.read()
	#True and Frame

	if(ret==True):
		cv2.imshow('FrameTitle',frame) 
		if(cv2.waitKey(1)&0xFF==ord('q')):
			break
	else:
		print("Cannot Capture")
		break
else:
	print("Path is wrong")

#When everything done, release the capture
cap.release()
cv2.destroyAllWindows()