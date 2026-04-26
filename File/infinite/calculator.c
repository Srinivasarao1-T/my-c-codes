#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
int main()
{       
	int a,b,d;
	char choice;
	char ch ;
	printf("enter the number\n");
        scanf("%d",&a);
	d=a;
	while(1)
	{
           printf("enter the number");
	   __fpurge(stdin);
	   scanf("%d",&b);
	   printf("choice your option\n");
           printf("A/a:add M/m:mul S/s:sub Q/q:que R/r:rem E/e:exit O/o:next \n");
           //printf("1:add 2:mul 3:sub 4:que 5:rem E/e:exit O/o:next \n");
	   __fpurge(stdin);
           scanf("%c",&choice);
	   //printf("%d\n",choice);
	//   ch=(char)choice;
	  // printf("   %c",ch);
          if(choice=='O' || choice == 'o')
	   {
		   break;
	   }
	  /* if(choice==7){
               break;
	   }*/

	/*  if(choice==69||choice==101)
		  
	   {
	           choice=6; 
	   }*/
	   switch(choice){
		   case 'A':
	           case 'a':
			   d=d+b;
			   printf("%d",d);
			   break;
	           case 'M':
	           case 'm':
			   d=d*b;
			   printf("%d",d);
			   break;
		   case 'S':
	           case 's': 
			   d=d-b;
			   printf("%d",d);
			   break;
	           case 'Q':
	           case 'q':
			   d=d/b;
			   printf("%d",d);
			   break;
	           case 'R':
	           case 'r':
			   d=d%b;
			   printf("%d",d);
			   break;
		   case 'E':
	           case 'e':
			   exit(0);
	           default:printf("invalid input"); 
	   }
	}
        printf("out");
}
