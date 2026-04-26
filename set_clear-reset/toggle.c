#include<stdio.h>
int main()
{
	int a,bit;
	scanf("%d %d",&a,&bit);
	a=a^(1<<bit);
	printf("%d",a);
}

