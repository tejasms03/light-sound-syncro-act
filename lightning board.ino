#include<Adafruit_NeoPixel.h>
#define ledn 8
#define pin 3

Adafruit_NeoPixel p=Adafruit_NeoPixel(ledn,pin,NEO_GRB+NEO_KHZ800);
// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
}

void loop()
{
   uint32_t red=p.Color(255,0,0);
  uint32_t b=p.Color(0,0,0);
  for (int ii = 0; ii < 4; ii++)
  {
  for (int i = 0; i < 8; i++)
  {
  p.setPixelColor(i,red);
    p.show();
   delay(40);
  }
  digitalWrite(1, HIGH);
    delay(40);
    digitalWrite(1,LOW);
   for (int i = 8; i > 0; i--)
  {
  p.setPixelColor(i,b);
    p.show();
   delay(40);
  }
  }
   // Delay a little bit to improve simulation performance
}
