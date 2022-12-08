#include<reg51.h>
void print()
{
	while(TI == 0)
	{
		TI = 0;
	}
}
void main()
{
	TMOD = 0x20;
	TH1 = 0xFD;
	SCON = 0x50;
	TR1 = 1;
	SBUF = 'M';
	print();
	
}