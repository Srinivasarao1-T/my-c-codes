//i/p  :1234  o/p :24
#include<stdio.h>
int main()
{
	int a,p=1,d;
        scanf("%d",&a);
	while(a)
	{
		d=a%10;
		p=p*d;
		a/=10;
	}
	printf("%d",p);
}
