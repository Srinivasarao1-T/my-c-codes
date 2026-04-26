#include<stdio.h>
int main()
{
	int a,b;
        printf("enter the first value ");
	scanf("%d",&a);
	printf("enter the second value");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d isgreater than %d",a,b);

	}
	else if(b>a)
	{
		printf("%d is greater than %d",b,a);
	}
	else
	{
		printf("%d is equals to %d",a,b);
	}
}
