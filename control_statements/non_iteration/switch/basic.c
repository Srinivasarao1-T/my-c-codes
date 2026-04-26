#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the any two number\n");
	scanf("%d%d",&a,&b);
	printf("choice the option\n");
	printf("1:add 2:sub 3:mul 4:quoent 5:rem\n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
			break;
		case 3:
			printf("%d",a*b);
		        break;
		case 4:
			printf("%d",a/b);
		        break;
		case 5:
			printf("%d",a%b);
			break;
		default:printf("invalid");
	}

}
