#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#define MAX 9
int cnt=0;
typedef struct student
{
  char name[20];
  int roll;
}STUDENT;
void printmenu()
{
        printf("I/i:input P/p:print E/e:edit F/f:find S/s:sort D/d:delete Q/q:quit\n");
}
void input(STUDENT *arr)
{
           printf("Enter the name\n");
           scanf("%s",arr[cnt].name);
           printf("Enter the roll number\n");
           scanf("%d",&arr[cnt].roll);
   cnt++;
}
void print(STUDENT *arr)
{
        for(int i=0;i<cnt;i++)
        {
                printf("THE STUDENT %d is\n",i+1);
                printf("name:%s\n",arr[i].name);
                printf("roll:%d\n\n",arr[i].roll);
        }
}
void sort(STUDENT *arr)
{
        printf("sort by \n");
        printf("N/n:name R/r:roll\n");
        char ch;
        STUDENT var;
        __fpurge(stdin);
        scanf("%c",&ch);
        switch(ch)
        {
             case 'N':
             case 'n':
                       for(int i=0;i<cnt-1;i++)
                       {
                               for(int j=i+1;j<cnt;j++){
                               if(strcmp(arr[i].name,arr[j].name)>0)
                               {
                                       var=arr[i];
                                       arr[i]=arr[j];
                                       arr[j]=var;
                               }
                               }
                       }
                       break;
             case 'R':
             case 'r':
                       for(int i=0;i<cnt-1;i++)
                       {
                               for(int j=i+1;j<cnt;j++){
                               if(arr[i].roll>arr[j].roll)
                               {
                                       var=arr[i];
                                       arr[i]=arr[j];
                                       arr[j]=var;
                               }
                               }
                       }
                       break;
        }
}
void data(STUDENT *arr)
{
                               char ch[20];
                               int flag=0;
                               printf("enter the name\n");
                               scanf("%s",ch);
                               for(int i=0;i<cnt;i++)
                               {
                                       if(strcmp(ch,arr[i].name)==0)
                                       {
                                               printf("the student no is %d\n",i+1);
                                               printf("name=%s\n",arr[i].name);
                                               printf("roll=%d\n\n",arr[i].roll);
                                               flag=1;
                                       }
                               }
                               if(flag==0)
                               {
                                       printf("not found\n");
                               }
}
void data2(STUDENT *arr)
{                                int data,flag1=0;
	                         scanf("%d",&data);
                                 for(int i=0;i<cnt;i++)
                                 {
                                         if(data==arr[i].roll)
                                         {
                                               printf("the student no is %d\n",i+1);
                                               printf("name=%s\n",arr[i].name);
                                               printf("roll=%d\n\n",arr[i].roll);
                                               flag1=1;

                                         }
                                 }
                                 if(flag1==0)
                                 {
                                         printf("not found\n");
				 }
}
void find(STUDENT *arr)
{
              printf("N/n:name R/r:roll\n");
              char choice;
              __fpurge(stdin);
              scanf("%c",&choice);
              switch(choice)
              {
                      case 'N':
                      case 'n':
                              data(arr);
                               break;
                        case 'R':
                        case 'r':
                                 data2(arr);
                                 break;
                        default : printf("invalid option\n");
              }
}
void byname(STUDENT *arr)
{
        printf("enter the name\n");
        char name1[20];
        scanf("%s",name1);
        for(int i=0;i<cnt;i++)
        {
                if(strcmp(name1,arr[i].name)==0)
                {
                        for(int j=i;j<cnt-1;j++)
                        {
                            arr[j]=arr[j+1];
                        }
                        cnt--;
                        i--;
                }
        }
}
void byroll(STUDENT *arr)
{
        printf("enter the rollnumber\n");
        int r;
        scanf("%d",&r);
        for(int i=0;i<cnt;i++)
        {
                if(arr[i].roll==r)
                {
                        for(int j=i;j<cnt-1;j++)
                        {
                            arr[j]=arr[j+1];
                        }
                        cnt--;
                        i--;
                }
        }
}
void stu_no(STUDENT *arr)
{
        printf("enter the student number\n");
        int  no;
        scanf("%d",&no);
        for(int i=no;i<cnt-1;i++)
        {
            arr[i]=arr[i+1];
        }
	cnt--;
}
void delete(STUDENT *arr)
{
        printf("N/n:name R/r:rollno S/s:student no\n");
        char choice;
        __fpurge(stdin);
        scanf("%c",&choice);
        switch(choice)
        {
                case 'N':
                case 'n':
                         byname(arr);
                         break;
                case 'R':
                case 'r':
                         byroll(arr);
                         break;
                case 'S':
                case 's':
                         stu_no(arr);
                         break;
                defalut: printf("invalid option\n");
        }
}
void edit_name(STUDENT *arr)
{
	char edn[20];
	int flag=0;
	printf("enter the old name\n");
	scanf("%s",edn);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(edn,arr[i].name)==0)
		{
			flag=1;
			printf("The data found is\n");
			printf("name=%s roll=%d\n",arr[i].name,arr[i].roll);
                        printf("Y/y:yes  N/n:no Q/q:quit\n");
			char choice;
			__fpurge(stdin);
			scanf("%c",&choice);
			switch(choice)
			{ 
				case 'Y':
				case 'y':
					printf("Enter the new name\n");
					char names[20];
					scanf("%s",names);
					strcpy(arr[i].name,names);
					break;
				case 'Q':
				case 'q':
					return;
				case 'N':
				case 'n':
			}
		}
	}
	if(flag==0)
	{
		printf("no data found\n");
	}
}
void edit_roll(STUDENT *arr)
{
	int r,flag=0;
	printf("enter the current roll number\n");
	scanf("%d",&r);
	for(int i=0;i<cnt;i++)
	{
		if(r==arr[i].roll)
		{
			flag=1;
			printf("The data found is\n");
			printf("name=%s roll=%d\n",arr[i].name,arr[i].roll);
                        printf("Y/y:yes  N/n:no Q/q:quit\n");
			char choice;
			__fpurge(stdin);
			scanf("%c",&choice);
			switch(choice)
			{ 
				case 'Y':
				case 'y':
					int rr;
					printf("Enter the new roll number\n");
					scanf("%d",&rr);
					arr[i].roll=rr;
					break;
				case 'Q':
				case 'q':
					return;
				case 'N':
				case 'n':
			}
		}
	}
	if(flag==0)
	{
		printf("no data found\n");
	}

}
void edit(STUDENT *arr)
{
	printf("N/n:name R/r:roll\n");
	char ed;
	__fpurge(stdin);
	scanf("%c",&ed);
        switch(ed)
	{
		case 'n':
	        case 'N':
			   edit_name(arr);
			   break;
		case 'r':
		case 'R':
			   edit_roll(arr);
	        default:
			   printf("invalid choice");
	}
}
int main()
{
  STUDENT arr[MAX+1];
  char ch;
  while(1)
  {
         printmenu();
         __fpurge(stdin);
         scanf("%c",&ch);
         switch(ch)
         {
                case 'i':
                case 'I':
                        if(cnt==MAX)
                        {
                                printf("max data reached\n");
                                break;
                        }
                         input(arr);
                         break;
                case 'F':
                case 'f':
                         find(arr);
                         break;
		case 'E':
	        case 'e':
			 edit(arr);
			 break;
                case 's':
                case 'S':
                         sort(arr);
                         break;
                case 'P':
                case 'p':
                         print(arr);
                         break;
                case 'D':
                case 'd':
                         delete(arr);
                         break;
                case 'Q':
                case 'q':
                         return 0;
               default :printf("invalid choice\n");
         }
  }
}

