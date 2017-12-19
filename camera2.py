import cv2.cv as cv
import time

#file = open("../../../var/www/html/text/test.txt","w")
cv.NamedWindow("camera", 1)

capture = cv.CaptureFromCAM(0)
while True:
    img = cv.QueryFrame(capture)
    cv.ShowImage("camera", img)
    cv.SaveImage('../../../var/www/html/images/pic.jpg', img)
    #file.write("Hola") 
    
    if cv.WaitKey(10) == 27:
	#file.close()
        break 
