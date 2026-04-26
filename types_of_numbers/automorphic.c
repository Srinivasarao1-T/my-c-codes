//i/p:5776  o/p:automorphic
//i/p:25     o/p:   ''
//i/p:7     o/p:not
#include<stdio.h>
int main()
{
	int d,r,a,b=1;
	scanf("%d",&a);
        r=a*a;
	int t=a;
	while(a)
	{
		d=a%10;
		b=b*10;
		a/=10;
	}
	if((r%b)==t)
         {
		 printf("automorphic");
	 }
	else
	{
		printf("not");
	}
}
