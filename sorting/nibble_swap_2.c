//i/p : 0xABCD     o/p :0xACBD
#include<stdio.h>
int main()
{
	unsigned short int a;
	scanf("%hx",&a);
	a=(a&0xf00f)|((a&0x0f00)>>4)|((a&0x00f0)<<4);
	printf("%hx",a);

}
