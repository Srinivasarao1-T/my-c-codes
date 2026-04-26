//structure padding
#include<stdio.h>
struct base
{  
	char ch;//1 byte
	int var;//4 byte 
	float var1;//4 byte 
	char var2;//4 byte 
};
int main()
{
	struct base n;
	printf("%ld",sizeof(n));

}
