#include<stdio.h>
#include<stdlib.h>
struct DOB{
	int day;
	int month;
	int year;
};
struct student 
{
	int roll;
	char name[20];
	struct DOB *dob;
	struct student *ptr;
};
int main()
{
	struct student var;
	printf("enter the roll\n");
        scanf("%d",&var.roll);
	printf("enter the name\n");
        scanf("%s",var.name);
	var.dob=NULL;
	var.dob=realloc(var.dob,8);
	printf("enter the day\n");
        scanf("%d",&var.dob[0].day);
	printf("enter the month\n");
        scanf("%d",&var.dob->month);
	printf("enter the year\n");
        scanf("%d",&var.dob->year);
	printf("\n\n enter the roll\n");
        printf("%d",var.roll);
	printf("enter the name\n");
         printf("%s",var.name);
	printf("enter the day\n");
        printf("%d",var.dob->day);
	printf("enter the month\n");
        printf("%d",var.dob->month);
	printf("enter the year\n");
        printf("%d",var.dob->year);

}
