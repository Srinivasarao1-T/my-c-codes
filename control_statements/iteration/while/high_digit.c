//i/p 123465       o/p    6
#include<stdio.h>
int main()
{
	int a,high=0,dig;
	scanf("%d",&a);
	while(a)
	{
		dig=a%10;
		if(dig>high){
			high=dig;
		}
		a/=10;
	}
	printf("%d",high);
}
