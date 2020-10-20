int echo_pin=5;

int trig_pin=8;


 int time;
 int distance;

 
 void setup()
 {
  Serial.begin(9600);
  Serial.print("Welcome");
  pinMode(13,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(trig_pin,OUTPUT);

  
 }


void loop()
{
digitalWrite(trig_pin,HIGH);

delayMicroseconds(10);

digitalWrite(trig_pin,LOW);

time=pulseIn(echo_pin,HIGH);

distance=time*(0.034/2);

if (distance <=10)
{
  Serial.println("detected");

  Serial.print("Distance=");

  Serial.println(distance);

  digitalWrite(13,HIGH);
  

  delay(500);
  
}
  else
  {
            Serial.println("not detected");    
             digitalWrite(13,LOW);

                   
  }
  
}
