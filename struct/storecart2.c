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
    chocalate item={10,20,5,15},temp=item;
    while(1)
    {
input:	    printf("Items in cart\n");
	    printf("K/k:kitkat=10 -/\nD/d:dairymilk= 20-/\nF/f:fivestar=10-/\nS/s:snickers=20-/\nB/b:bill\nC/c:cancel order\n");
	    char ch;
	    int i;
	    __fpurge(stdin);
	    scanf("%c",&ch);
	    if(ch=='B' ||ch=='b')
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
                              item.snicker-=i;
			     }
			     else{
				     printf("out of stocks avalible items are=%d\n",item.snicker);
			     }
			     break;
	          case 'C':
	          case 'c':
			     exit(0);
	         
                  default:printf("invalid option\n");
	    }
    }
    int total=0,cnt,into;
    printf("\n");
    if(item.kitkat!=temp.kitkat)
    {
            cnt=temp.kitkat-item.kitkat;
	    into=10*cnt;
	    total+=into;
            printf("kitkat = %d - %d\n",cnt,into);
    }
    if(item.dairymilk!=temp.dairymilk)
     {
	     cnt=temp.dairymilk-item.dairymilk;
	     into=20*cnt;
	     total+=(20*cnt);
            printf("dairymilk = %d - %d\n",cnt,into);
     } 
     if(item.fivestar!=temp.fivestar)

     {
	    cnt=temp.fivestar-item.fivestar;
	    into =10*cnt;
	    total+=(10*cnt);
            printf("fivestar = %d - %d\n",cnt,into);
     } 
     if(item.snicker!=temp.snicker)
     {
	     cnt=temp.snicker-item.snicker;
	     into=cnt*20;
	     total+=(20*cnt);
            printf("snicker = %d - %d\n",cnt,into);
     }
    if(total!=0){ 
     printf("total bill = %d\n\n",total);
    }
	     printf("avalible kitkat  = %d\n",item.kitkat);
	     printf("avalible dairymilk = %d\n",item.dairymilk);
	     printf("avalible fivestar = %d\n",item.fivestar);
	     printf("avalible snicker = %d\n\n",item.snicker);
      temp=item;
    goto input;
}
