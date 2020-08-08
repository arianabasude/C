import cv2

cap=cv2.VideoCapture(0)
#0 for camera

#for saving
fourcc=cv2.VideoWriter_fourcc(*'XVID') #for .avi
fourcc=cv2.VideoWriter_fourcc(*'X264') #for .mp4
# fourcc=cv2.VideoWriter_fourcc(*'mp4v') #for .mov
# fourcc=cv2.VideoWriter_fourcc(*'MJPG') #for .avi


width = int(cap.get(cv2.CAP_PROP_FRAME_WIDTH) + 0.5)
height = int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT) + 0.5)
size = (width, height)
out=cv2.VideoWriter('/Users/newmac/Documents/GayatriBasude/Python/OpenCV/output.mp4',fourcc,20,size)
#filename, fourcc, no. of frames per second, (width,heigh)

while(cap.isOpened()):
	ret,frame=cap.read()
	#True and Frame

	if(ret==True):
		cv2.imshow('FrameTitle',frame) 

		out.write(frame)

		if(cv2.waitKey(1)&0xFF==ord('q')):
			break
	else:
		print("Cannot Capture")
		break
else:
	print("Path is wrong")

#When everything done, release the capture
cap.release()
out.release()
cv2.destroyAllWindows()