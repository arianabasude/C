import cv2
import datetime

cap=cv2.VideoCapture(0)
#0 for camera

while(cap.isOpened()):
	ret,frame=cap.read()
	#True and Frame

	if(ret==True):
		frame=cv2.putText(frame,str(datetime.date.today()),(10,50),cv2.FONT_HERSHEY_SIMPLEX,1,(255,100,100),3,cv2.LINE_AA)
		#frame,text,coordinate,font,fontscale,color,thickness,linetype
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