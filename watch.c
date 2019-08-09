#include<avr/io.h>
#include<util/delay.h>
int main()
{
int h1,h2,m1,m2,s1,s2;
DDRC=0xFF;
DDRD=0xFF;
int a[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
while(1)
{
for(h2=0;h2<=2;h2++)
{ 
if((h1==4)&&(h2==2))
{ break;
}
for(h1=0;h1<=9;h1++)
{
if((h1==4)&&(h2==2))
{ break;
}
for(m2=0;m2<=5;m2++)
{
for(m1=0;m1<=9;m1++)
{
for(s2=0;s2<=5;s2++)
{
for(s1=0;s1<=9;s1++)
{
for(int i=0;i<=1;i++)
{
   PORTD=0x3E;
   PORTC=a[s1];
   _delay_ms(1);
   PORTD=0x3d;
   PORTC=a[s2];
   _delay_ms(1);
   PORTD=0x3b;
   PORTC=a[m1];
   _delay_ms(1);
   PORTD=0x37;
   PORTC=a[m2];
   _delay_ms(1);
   PORTD=0x2f;
   PORTC=a[h1];
   _delay_ms(1);
   PORTD=0x1f;
   PORTC=a[h2];
   _delay_ms(1);
   }
   }
   }
   }
   }
   }
   }
   }
   }
   
