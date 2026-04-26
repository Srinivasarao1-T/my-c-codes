/*input==0XABCD     output:0xDBCA*/
#include<stdio.h>
int main()
{
	unsigned short int num;
	scanf("%hx",&num);	
	num=((num&0x000f)<<12)|(num&0x0ff0)|((num&0xf000)>>12);	
	printf("%hx",num);
}
