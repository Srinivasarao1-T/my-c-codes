//i/p:1234    o/p:4321
#include<stdio.h>
int main()
{
	int a,p=0,d;
	scanf("%d",&a);
	while(a){
		d=a%10;
		p=(p*10)+d;
		a/=10;
	}
	printf("%d",p);
}

