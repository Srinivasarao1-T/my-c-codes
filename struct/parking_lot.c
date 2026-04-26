#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#define MAX 10
int amount=0;
typedef struct
{
	char type[10];
	char vehicle_no[20];
}par;
void printmenu()
{
	printf("\n..............\n");
	printf("\nI/i: Parking a vehicle\nR/r:remove a vehicle\nD/d:Display current status\nC/c:count vechile\nA/a:amount\nQ/q:exit\n");
	printf("\n..............\n");
}
void input(par *arr)
{
	printf("\n1:car - 20 -/_\n2:bike - 10-/_\n");

	int choice;
        scanf("%d",&choice);
	printf("choice the slot\n");
	for (int i=0;i<MAX;i++)
	{
		if(strcmp(arr[i].vehicle_no,"Empty")==0)
		{
			printf("%d  ",i+1);
		}
	}
	printf("\n");
	int slot;
	scanf("%d",&slot);
	slot--;
	if(strcmp(arr[slot].vehicle_no,"Empty")!=0)
	{
		printf("\ninvalid choice\n");
		return;
	}
	switch(choice)
	{
		case 1:
                         strcpy(arr[slot].type,"car");
                         amount +=20;
			 break;
		case 2:
			 strcpy(arr[slot].type,"bike");
			 amount +=10;
			 break;
	        default:printf("Invalid option\n");
			return;
	}
        printf("\nenter the vehicle number\n");
	__fpurge(stdin);
	scanf("%[^\n]s",arr[slot].vehicle_no);

}
void display(par *arr)
{
	printf("\n......parking lot status......\n");
	printf("s.no  vehicle no     type\n");
	for(int i=0;i<MAX;i++)
	{
	    printf("%d",i+1);
	    if(strcmp(arr[i].vehicle_no,"Empty")==0)

	    {
		    printf(" empty \n");
		    continue;
	    }
            printf("    %s",arr[i].vehicle_no);
            printf("     %s\n",arr[i].type);
	}
	printf("\n\n");
}
void removes(par *arr)
{
       printf("\nenter the vehicle no\n");
       char ch[20];
       __fpurge(stdin);
       scanf("%[^\n]s",ch);
       for(int i=0;i<MAX;i++)
       {
	       if(strcmp(arr[i].vehicle_no,ch)==0)
	       {
		     printf("\n The %s from the slot no %d is removed \n the %s number is : %s",arr[i].type,i+1,arr[i].type,arr[i].vehicle_no);
		     strcpy(arr[i].vehicle_no,"Empty");
		     return;
	       }
       }
       printf("\nvehicle is avalible plz check it once\n");
}
void count(par *arr)
{
	printf("\n......parking lot status......\n");
	printf("s.no\tvehicle no\ttype\n");
	for(int i=0;i<MAX;i++)
	{
	    if(strcmp(arr[i].vehicle_no,"Empty")!=0)

	    {
	    printf("%d",i+1);
            printf("\t%s\t",arr[i].vehicle_no);
            printf("%s\n",arr[i].type);
	    }
	}
	
}
int main()
{
    par arr[MAX];
    for(int i =0;i<MAX;i++)
    {
	    strcpy(arr[i].vehicle_no,"Empty");
    }
    char choice;
    while(1){
	    printmenu();
    __fpurge(stdin);
    scanf("%c",&choice);
    switch(choice)
    {
	    case 'i':
            case 'I':
		     input(arr);
		     break;
            case 'r':
            case 'R':
		     removes(arr);
		     break;
	    case 'D':
	    case 'd':
		     display(arr);
		     break;
            case 'c':
            case 'C':
		     count(arr);
      		      break;
            case 'Q':
            case 'q':
    		      return 0;
            case 'A':
            case 'a':
		       printf("\nThe amount was avalible from the parking upto now is %d\n",amount);
		       break;  
            default: printf("invalid option\n");
    } 
    }
} 
