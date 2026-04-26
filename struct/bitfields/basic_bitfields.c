#include<stdio.h>
typedef struct DOB
{
	unsigned int day : 5;
	unsigned int month :4 ;
	int year;
}dob;
int main()
{
    dob var;
    int temp;
    puts("enter the day");
   scanf("%d",&temp);
   var.day=temp;
   puts("enter the month");
   scanf("%d",&temp);
   var.month=temp;
   puts("enter the year");
   scanf("%d",&var.year);
   printf("%d-",var.day);
   printf("%d-",var.month);
   printf("%d",var.year);
   printf("\n%s\n",__TIME__);
   printf("%s\n",__DATE__);
}
