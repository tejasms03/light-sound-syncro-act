// C++ code
//
#include<Adafruit_NeoPixel.h>
#define ledn 48
#define pin 11

Adafruit_NeoPixel p=Adafruit_NeoPixel(ledn,pin,NEO_GRB+NEO_KHZ800);
#define ledn1 9
#define pin1 0
int d=0;
Adafruit_NeoPixel p1=Adafruit_NeoPixel(ledn1,pin1,NEO_GRB+NEO_KHZ800);
void smileinit()
{
  uint32_t red=p1.Color(255,0,0);
  for (int i = 0; i < 8; i++)
  {
  p1.setPixelColor(i,red);
    p1.show();
    delay(450);//hit n trial to match audio
    
  }  
}

void smile()
{
  uint32_t red=p1.Color(255,0,0);
  for (int i = 0; i < 12; i++)
  {
    p1.setPixelColor(i,red);
   
  }
  
}
void ribs(int r=0,int g=0,int b=255)
{
  uint32_t rd=p.Color(r,g,b);
  for (int i = 0; i < 48; i++)
  {
  p.setPixelColor(i,rd);
  }
}
void smclr()
{
  p1.clear();
  p1.show();
}
void rbclr()
{
  p.clear();
  p.show();
}

void state(int a=0,int b=0,int c=0,int e=0,int f=0,int g=0,int h=0,int i=0)
{
 if(a==0)
 {
   smclr();
 }
 else
  {
  smile();
  p1.show();
  }
 if(b==0)
 {
  digitalWrite(1, LOW);
 }
 else
  {
  digitalWrite(1, HIGH);
  }
 if(c==0)
 {
  digitalWrite(2, LOW);
 }
 else
  {
  digitalWrite(2, HIGH);
  }
 if(d==0)
 {
  digitalWrite(3, LOW);
 }
 else
  {
  digitalWrite(3, HIGH);
  }
  if(e==0)
 {
  digitalWrite(4, LOW);
 }
 else
  {
  digitalWrite(4, HIGH);
  }
  if(f==0)
 {
  digitalWrite(5, LOW);
 }
 else
  {
  digitalWrite(5, HIGH);
  }
  if(g==0)
 {
  digitalWrite(6, LOW);
 }
 else
  {
  digitalWrite(6, HIGH);
  }
 if(h==0)
 {
  digitalWrite(7, LOW);
 }
 else
  {
  digitalWrite(7, HIGH);
  }
}
void setup()
{
  
  p.begin();
  p.show();
  p1.begin();
  p1.show();
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);

}
 void loop()
{
d=digitalRead(8);
if(d==1)
{
state(0,1,0,0,0,1,1,0);
  delay(500);
smileinit();
  delay(500);
  for(int i=0;i<=20;i++)
  {
   state(0,0,1,1,0,0,0,0);
     delay(100);
   state(1,1,0,0,0,1,1,0);  
    delay(100);
  }
	delay(500);
    for(int i=0;i<=20;i++)
  {
   state(0,0,1,0,0,0,0,0);
     delay(100);
   state(1,1,0,0,0,1,1,0);  
    delay(100);
  }
  delay(500);
  state();
}}
