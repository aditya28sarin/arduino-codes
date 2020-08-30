#include<Servo.h>
int sensorValue;
int sensorValue1;
Servo myservo;  //creating servo object

int pos=180;




void setup() {
myservo.attach(9); // to attach the servo tot he pin 9 of arduino
pinMode(2,INPUT_PULLUP);//Pushbuttons or switches connect two points in a circuit when you press them. 
pinMode(8,INPUT_PULLUP);
                          //When the pushbutton is open (unpressed) there is no connection between the two legs of the pushbutton.
                          //Because the internal pull-up on pin 2 is active and connected to 5V, we read HIGH when the button is open. 
                          //When the button is closed, the Arduino reads LOW because a connection to ground is completed.

}

void loop() {
sensorValue=digitalRead(2);
sensorValue1=digitalRead(8);
while(sensorValue==HIGH)
{

  myservo.detach(); 
 
 
}
while(sensorValue==LOW)   
myservo.attach(9);
  myservo.write(pos);
  delay(5);
}
