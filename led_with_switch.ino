int sensorValue;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(4,INPUT);  //initialize digital pin 4 as an input with the internal pull-up resistor enabled
pinMode(8,OUTPUT);       


}

void loop() {
sensorValue=digitalRead(4);

if (sensorValue==HIGH)
{
  digitalWrite(8,HIGH);
}
else
{
  digitalWrite(8,LOW);
}

}
