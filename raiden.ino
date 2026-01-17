// C++ code
//
#include<Adafruit_NeoPixel.h>
#define ledn 8
#define pin 1
Adafruit_NeoPixel p=Adafruit_NeoPixel(ledn,pin,NEO_GRB+NEO_KHZ800);
void smileinit()
{
  uint32_t red=p.Color(0,0,255);
  for (int i = 0; i < 8; i=i+2)
  {
  p.setPixelColor(i,red);
  p.setPixelColor(i+1,red);  
    p.show();
    delay(50);
  }}
void smclr()
{
  p.clear();
  p.show();
}
void state(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0,int g=0,int h=0,int i=0)
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
  digitalWrite(10, LOW);
 }
 else
  {
  digitalWrite(10, HIGH);
  }
  if(e==0)
 {
  digitalWrite(9, LOW);
 }
 else
  {
  digitalWrite(9, HIGH);
  }
 if(f==0)
 {
  digitalWrite(8, LOW);
 }
 else
  {
  digitalWrite(8, HIGH);
  }
if(g==0)
 {
  digitalWrite(7, LOW);
 }
 else
  {
  digitalWrite(7, HIGH);
  }
 if(h==0)
 {
  digitalWrite(6, LOW);
 }
 else
  {
  digitalWrite(6, HIGH);
  }
   if(i==0)
 {
  digitalWrite(3, LOW);
 }
 else
  {
  digitalWrite(3, HIGH);
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
   buttonState = digitalRead(2);
  if (buttonState == HIGH) {
  
  state(0,0,1,1,1,0,1,0,0);//plainclothes
    delay(34000);
    smileinit();//loader on electro starts to pre electro in sky
   
  state(0,0,1,1,1,0,1,1,0);//electro on
    delay(12000);
    smclr();//loader off
state(0,0,1,1,1,0,1,0,0);//electro off
    delay(5000);
state(0,0,1,1,1,0,1,0,1);//gs on
    delay(8000);
      //smile();//write this tejas
state(0,0,1,1,1,0,1,1,1);//electro on
    delay(5000);//2nd electo time
    smclr();//loader off
state(0,0,1,1,1,0,1,0,1);//electro off
    delay(5000);
state(1,0,0,1,1,0,1,0,1);//h1 cut
    delay(3000);
state(1,1,0,0,1,0,1,0,1);//h2 cut
    delay(10000);
state(1,1,0,0,1,1,1,0,1);//groove on
    delay(8000);
state(1,1,0,0,1,1,0,0,1);//head off
delay(15000);
state();//everything off
   }
}
