int trigger_pin =2;

int echo_pin=3;

int time;

int distance;

void setup()
{

  Serial.begin(9600);

  pinMode(trigger_pin,OUTPUT);

  pinMode(echo_pin, INPUT);
pinMode(13,OUTPUT);

}


  
void loop()
{
digitalWrite(trigger_pin,HIGH);

delayMicroseconds(10);

digitalWrite(trigger_pin,LOW);

time=pulseIn (echo_pin,HIGH);//pulseIn reads a pulse either HIGH or LOW . If value is HIGH , pulseIn() waits for the pin to 
                             //go HIGH starts timing and then waits for the pin to go low and stops counting
                             // returns the length of the pulse in micro sec or 0 if no complete pulse was received
                             //pulseIn(pin,value)

distance = (time*0.034/2);

if (distance <=25)
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
