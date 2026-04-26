#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value according to the your choice \n1:Set Position\n2:clear Position\n3:Toggle position\n4:Bit positioin check\n");
	scanf("%d",&a);
	if(a>=1&&a<=4){
	printf("Enter the value\n");
	scanf("%d",&b);
	printf("Enter the Bit value\n");
	scanf("%d",&c);
	if(a==4)
	{
		b=b&(1<<c);
		if(b==0){
			printf("Clear\n");
		}
		else
		{
			printf("Set\n");
		}
	}
        else if(a==2)
	{
		printf("%d\n",b&(~(1<<c)));
	}
	else if(a==1)
	{
		printf("%d\n",b|(1<<c));
	}
	else if(a==3)
	{
		printf("%d\n",b^(1<<c));
	}
	}
	else
	{
		printf("Invalid\n");
	}

	return 0;


}
