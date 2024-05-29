#include<stdio.h>
int main()
{
unsigned int x;
printf("enter the integer:");
scanf("%u",&x);
unsigned int evenBits=x & 0XAAAAAAAA;
unsigned int oddBits=x & 0X55555555;

evenBits >>= 1;
oddBits <<= 1;
unsigned int result=evenBits | oddBits;
printf("%u",result);
return 0;

}
