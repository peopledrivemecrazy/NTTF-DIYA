import sys
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)

relay_condition = sys.argv[0] #Capture use input

if relay_condition == 1:
	GPIO.output(17, True)
if relay_condition == 0: 
        GPIO.output(17, False)


