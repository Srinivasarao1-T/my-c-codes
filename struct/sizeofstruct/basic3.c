//structure padding
#include<stdio.h>
struct base
{  
	int  ch[20];//4 byte
	char var;//1 byte 
};
int main()
{
	struct base n;
	printf("%lu",sizeof(n));

}
