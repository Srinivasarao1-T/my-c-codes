//i/p:5   1    o/p :5
#include<stdio.h>
int main()
{
	int i=31,a,b,c=0,d=0;
	scanf("%d %d",&a,&b);
	while(i>=0)
	{
		if((a>>i)&1)
		{
			c++;
		}
		if((b>>i)&i)
		{
		     d++;
		}
		i--;
	}
	if(c==d)
	{
		printf("both having equal set");
	}
	else if(c>d)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}

}
