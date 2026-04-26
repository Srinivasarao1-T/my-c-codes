#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
int main()
{
	printf("hi\n");
	int a,b;
	char choice;
	fflush(stdin);

	while(1)
	{   
	     printf("enter num1 num2\n");
	     fflush(stdin);
	     __fpurge(stdin);
	     scanf("%d",&a);
	     printf("enter the num\n");
             __fpurge(stdin);    
	     scanf("%d",&b);
	     printf("1:add 2:sub 3:mul 4:exit 5:next\n");
	     __fpurge(stdin);
	     scanf("%c",&choice);
	     if(choice==5)
	     {
		     break;
	     }
	     switch(choice)
	     {
		case 'a': printf("%d",a+b);
			break;
		case 'b': printf("%d",a-b);
		       break;
		case 'c': printf("%d",a*b);
		       break;
	        case 'd':exit(0);
		default: printf("invalid");

			break;
	     }
	}
	printf("ouit of the loop");
}
