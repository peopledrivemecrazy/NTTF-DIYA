import RPi.GPIO as GPIO
import time

# Setup
GPIO.setmode(GPIO.BCM)
GPIO.setup(17, GPIO.OUT) #red led
GPIO.setup(27, GPIO.OUT) #yellow led
GPIO.setup(22, GPIO.OUT) #green led
# Loop
while True:
	GPIO.output(17, True)
	GPIO.output(27, False)
	GPIO.output(22, False)
	print "Red Light"
	time.sleep(5)
	GPIO.output(17, False)
        GPIO.output(27, False)
        GPIO.output(22, True)
	print "Green Light" 
        time.sleep(10)
        GPIO.output(17, False)
        GPIO.output(27, True)
        GPIO.output(22, False)
        print "Yellow Light" 
        time.sleep(2)

