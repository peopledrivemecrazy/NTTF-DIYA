void setup() {
  pinMode(A0, INPUT); // Connect digital Pin of the sensor to pin 2 of arduino
  Serial.begin(9600); //To see output in serial monitor
}

void loop() {
  int a  = analogRead(A0); //Read and store it in variable
  Serial.println(a); //Print variable
  delay(1000); // delay to see output
}
