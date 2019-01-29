import RPi.GPIO as GPIO
import time

# Setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT)

# Loop
while True:
	GPIO.output(17, True)
	print "LED ON"
	time.sleep(1)
	GPIO.output(17, False)
	print "LED OFF" 
        time.sleep(1)
