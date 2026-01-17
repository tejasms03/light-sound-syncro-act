// C++ code
//
#include<Adafruit_NeoPixel.h>
#define ledn 8
#define pin 1
#define pin1 7
Adafruit_NeoPixel p1=Adafruit_NeoPixel(ledn,pin1,NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel p=Adafruit_NeoPixel(ledn,pin,NEO_GRB+NEO_KHZ800);

void smileinit()
{
  uint32_t red=p1.Color(0,0,255);
  for (int i = 0; i < 8; i=i+1)
  {
  p1.setPixelColor(i,red);
//  p1.setPixelColor(i+1,red);  
    p1.show();
    delay(50);
  }}

void smileinit1()
{
  uint32_t red=p.Color(0,0,255);
  for (int i = 0; i < 8; i=i+1)
  {
  p.setPixelColor(i,red);
    p.setPixelColor(15-i,red);
//  p.setPixelColor(i+1,red);  
    p.show();
    delay(50);
  }}

void smclr()
{
  p.clear();
  p.show();
}

void smclr1()
{
  p1.clear();
  p1.show();
}


void state(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0,int g=0,int h=0)
{
 if(a==0)
 {
  digitalWrite(13, LOW);
 }
 else
  {
  digitalWrite(13, HIGH);
  }
 if(b==0)
 {
  digitalWrite(12, LOW);
 }
 else
  {
  digitalWrite(12, HIGH);
  }
if(c==0)
 {
  digitalWrite(11, LOW);
 }
 else
  {
  digitalWrite(11, HIGH);
  }

  if(d==0)
 {
  digitalWrite(9, LOW);
 }
 else
  {
  digitalWrite(9, HIGH);
  }
  
}
int buttonState = 0;

 


void setup()
{
  pinMode(2, INPUT);
  pinMode(6, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}
   
 void loop()
{
 // smileinit();
 // smileinit1();
  state(1,0,0,0);
  delay(1000); //edit here
  state(0,1,0,0);
  delay(1000); //edit here
  state(0,0,1,0);
  delay(1000); //edit here
  state(0,0,0,1);
   
   buttonState = digitalRead(2);
  if (buttonState == HIGH) 
  {
  state(1,0,0,0);
  state(1,0,1,0); 
  state(1,0,0,0);
  state(1,1,0,0);
  uint32_t red=p.Color(0,0,255);
  for (int i = 0; i < 8; i++)
  {
  p.setPixelColor(i,red); 
  p.show();
    delay(50);
    if(i%2==0){
    state(1,0,1,0); 
    }
  }
   }
}
 
