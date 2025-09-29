#include <Arduino.h>

int dauer=1000;

void setup()
{
  Serial.begin(115200);
  pinMode(13, OUTPUT);

}

void loop()
{	
  
  static bool led_state = LOW;
  static unsigned long previous_millis; // "Static" because value schouldnt change each iteration
  unsigned long current_millis;
  

  current_millis = millis();
  
  if((current_millis - previous_millis) > dauer/2)
  {
 	previous_millis = current_millis;
   	led_state =! led_state;
    digitalWrite(13, led_state);  
  }
   
}