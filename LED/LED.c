#include<reg51.h>
sbit LED1 = P2^2;
sbit LED2 = P2^5;
sbit LED3 = P2^6;


void delay()
{
	int i;
	int j;
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10000;j++)
		{
		}
	}
}

void main()
{
	while(1)
	{
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		delay();
		LED1 = 1;
		LED2 = 1;
		LED3 = 1;
		delay();
		/*
		LED1 = 0;
		delay();
		LED1 = 1;
		delay();
		LED2 = 0;
		delay();
		LED2 = 1;
		delay();
		LED3 = 0;
		delay();
		LED3 = 1;
		delay();
		*/
	}
}