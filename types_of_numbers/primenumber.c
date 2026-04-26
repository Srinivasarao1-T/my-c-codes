//i/p: 5 o/p:prime
//i/p:6  o/p:not
#include<stdio.h>
int main()
{
	int n,i=2,a,c=0;
	scanf("%d",&a);
	while(i<a)
	{
		if(a%i==0)
		{
			c++;
		}
		i++;
	}
	if(c>0)
	{
		printf("not");
	}
	else if(a==1)
	{
		printf("it is  neither prime nor composite");
	}
	else
	{
		printf("prime");
	}

}
