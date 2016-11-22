/*This program is to demonstrate the working of if else statement.
 * Make a decision based on the value of a variable named "sensor".
 * "sensor" is a variable that holds the digital value from the IR Sensor pair.
 * Depending on the value of sensor print the desired statements 
 * sensor = 0 --> print "Motor FWD"
 * sensor = 1 --> print "Motor REV"
 * Printing is done in the Serial Monitor window, 
 * which can be opened by clicking the lens icon on the right top corner.
 * By default we have to choose the baud rate for serial communication as 9600.
 */
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool sensor;
  sensor = digitalRead(A0);
  if(sensor==0)
  {
    Serial.println("MOTOR FWD")  ;
  }
  else
  {
    Serial.println("Motor REV");
  }
}
