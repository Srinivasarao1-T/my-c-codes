#include<stdio.h>
int main()
{
	int a,bit;
	scanf("%d %d",&a,&bit);
        (a&(1<<bit))==0?printf("clear"):printf("set");
}
	
