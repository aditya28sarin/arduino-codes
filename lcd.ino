//VSS --> GND
//VDD --> 5V
//VO --> 1KOHM RES AND NEXT END IS GROUNDED
//RS --> DIGITAL PIN ARDUINO 
//RW --> IF WE WANT TO WRITE OR PRINT ON LCD THEN WE USE WRITE AND HENCE GIVE LOW AND CONNECT TO GND 
//IF WE WANT TO READ FROM LCD, WE GIVE HIGH 5V
//E --> DIGITAL PIN ARUINO
//D4,D5,D6,D7 --> DIGITAL PIN ARDUINO
//A --> BACKLIGHT CATHODE --> 5V
//K --> BACKLIHT ANODE --> GND

//COLUMNS ARE FROM 0-15
//ROWS ARE FROM 0-1
//
//IF WE WANT TO PRINT 'A' ON 6TH COL AND 2ND ROW 
//lcd.setCursor(5,1)
//lcd.print("a");

#include<LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);  // initialize the library by associating any needed LCD interface pin
                                 // with the arduino pin number it is connected to


void setup()
{
  lcd.begin(16,2);

  lcd.print("hello, world"); //If we want this to be printed continuously then we put in void setup
                             //  here there is no cursor so autmatically it will be printed in col=1 and row1

}


void loop()
{

  lcd.setCursor(0,1);  //set the cursor to col=0,row=1

  lcd.print(millis()/1000);    //millis() prints the milisec since arduino started

  
}
