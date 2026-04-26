#include<stdio.h>
#include<stdio_ext.h>
struct student
{
	char name[20];
	int rollno;
        int phonenumber;
        char gender;
        char emailid[20];
 	
}stu[3];

int main()
{
	for(int i=0;i<3;i++)
	{
		printf("enter the name\n");
		scanf("%s",stu[i].name);
		printf("enter the roll number\n");
		scanf("%d",&stu[i].rollno);
		printf("enter the phone number \n");
		scanf("%d",&stu[i].phonenumber);
		printf("enter the gender\n");
		__fpurge(stdin);
		scanf("%c",&stu[i].gender);
		printf("enter the emailid\n");
		scanf("%s",stu[i].emailid);

	}
	 for(int i=0;i<3;i++)                                                                                                    {
                printf("the name of student %d\n",i+1);
                printf("%s\n",stu[i].name);
                printf(" the roll number is\n");
                printf("%d\n",stu[i].rollno);
                printf("the phone number is \n");
                printf("%d\n",stu[i].phonenumber);
                printf(" the gender is\n");
                printf("%c\n",stu[i].gender);
                printf(" the emailid is\n");
                printf("%s\n",stu[i].emailid);
		printf("\n");

        }
}
