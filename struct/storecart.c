#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
typedef struct 
{
	int kitkat;
	int dairymilk;
	int fivestar;
	int snicker;
}chocalate;
int main()
{
    chocalate item={10,20,5,15};
    int totalbill=0,items,cnt=0;
    while(1)
    {
	    printf("Items in cart\n");
	    printf("K/k:kitkat=10 -/\nD/d:dairymilk= 20-/\nF/f:fivestar=10-/\nS/s:snickers=20-/\nQ/q:quit\n");
	    char ch;
	    int i;
	    __fpurge(stdin);
	    scanf("%c",&ch);
	    if(ch=='Q' ||ch=='q')
	    {
		    break;
	    }
	    switch(ch)
	    {
		    case 'K':
	            case 'k':
			     printf("enter the no of items\n");
	                     scanf("%d",&i);
			     if(item.kitkat>=i)
			     {
			      cnt=cnt+(i*10);
                              item.kitkat-=i;
			     }
			     else{
				     printf("out of stocks avalible items are=%d\n",item.kitkat);
			     }
			     break;
		   case 'D':
	           case 'd':
			     printf("enter the no of items\n");
	                     scanf("%d",&i);
			     if(item.dairymilk>=i)
			     {
			      cnt=cnt+(i*20);
                              item.dairymilk-=i;
			     }
			     else{
				     printf("out of stocks avalible items are=%d\n",item.dairymilk);
			     }
			     break;
		   case 'F':
                   case 'f':
			     printf("enter the no of items\n");
	                     scanf("%d",&i);
			     if(item.fivestar>=i)
			     {
			      cnt=cnt+(i*10);
                              item.fivestar-=i;
			     }
			     else{
				     printf("out of stocks avalible items are=%d\n",item.fivestar);
			     }
			     break;
	           case 'S':
	           case 's':
			     printf("enter the no of items\n");
	                     scanf("%d",&i);
			     if(item.snicker>=i)
			     {
			      cnt=cnt+(i*30);
                              item.snicker-=i;
			     }
			     else{
				     printf("out of stocks avalible items are=%d\n",item.snicker);
			     }
			     break;
                  default:printf("invalid option\n");
	    }
    }
    printf("total bill is %d\n",cnt);
}
