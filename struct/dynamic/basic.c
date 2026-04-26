#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
typedef struct 
{
	int roll;
	float marks;
	char name[20];
}STU;
int cnt=0;
void delete(STU *arr)
{
	printf("N/n:name M/m:marks R/r;roll\n");
	char choice;
	char str[20];
	         float f;
        int n,flag=0;
        __fpurge(stdin);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'N':
		case 'n':
	printf("enter the name what to delete\n");
	scanf("%s",str);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(str,arr[i].name)==0)
		{
		    flag=1;
                    memmove(arr+i,arr+i+1,(cnt-i-1)*sizeof(STU));
                    arr=realloc(arr,--cnt*sizeof(STU));
		}
	}
	break;
		case 'M':
	        case 'm':
         	printf("enter the marks what to delete\n");
         	scanf("%f",&f);
	                for(int i=0;i<cnt;i++)
                {
                      if(f==arr[i].marks)
                {
			flag=1;
                    memmove(arr+i,arr+i+1,(cnt-i-1)*sizeof(STU));
                    arr=realloc(arr,--cnt*sizeof(STU));
                }
                     }
                   break;
	        case 'R':
	       case 'r':
	printf("Enter the roll what to delete number\n");
        scanf("%d",&n);
                        for(int i=0;i<cnt;i++)
        {
                if(n==arr[i].roll)
                {
			flag=1;
                    memmove(arr+i,arr+i+1,(cnt-i-1)*sizeof(STU));
                    arr=realloc(arr,--cnt*sizeof(STU));
                }
        }
        break;
	       default :printf("invalid option\n");
			return;
	}
	if(flag==0)
	{
		printf("Data not found\n");
	}
}
int main()
{
    STU *arr=NULL;
    while(1){
    printf("I/i:input S/s:sort P/p:print D/d:delete Q/q:qiut\n");
    char choice;
    __fpurge(stdin);
    scanf("%c",&choice); 
    switch(choice)
    {
	    case 'I':
            case 'i':
                    arr=realloc(arr,cnt+1*sizeof(STU));
		    printf("enter the roll\n");
		    scanf("%d",&arr[cnt].roll);
		    printf("enter the marks\n");
		    scanf("%f",&arr[cnt].marks);
		    printf("enter the name\n");
		    scanf("%s",arr[cnt].name);
		    cnt++;
                    break;
           case 'd':
           case 'D':
		    delete(arr);
		    break;
	   case 'S':
           case 's':
		 //   sort(arr);
		    break;
           case 'P':
           case 'p':
		    for(int i=0;i<cnt;i++)
		    {
			    printf("the student no is=%d\n",i+1);
			    printf("rollno:%d\n",arr[i].roll);
                            printf("name :%s\n",arr[i].name);
			    printf("marks :%.3f\n\n",arr[i].marks);
		    }
		    break;
	case 'Q':
        case 'q':
		    return 0;
   }
    }
}
