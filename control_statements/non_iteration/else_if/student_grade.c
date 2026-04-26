#include<stdio.h>
int main()
{
	int a,b,c,d,e,f=0;
	printf("enter the 1st subject marks");
	scanf("%d",&a);
	printf("enter the 2nd subject marks");
	scanf("%d",&b);
	printf("enter the 3rd subject marks");
	scanf("%d",&c);
	printf("enter the 4th subject marks");
	scanf("%d",&d);
	printf("enter the 5th subject marks");
	scanf("%d",&e);
	f=a+b+c+d+e;
	float avg;
	avg=((float)f/500)*100;
	if(avg<45)
	{
		printf("Fail");
	}
	else if(avg>=45 && avg <55){
		printf("Grade D");
	}
	else if(avg>=55 && avg <65)
	{
		printf("Grade C");
	}
	else if(avg >=65 && avg<75 )
	{
		printf("Grade B");
	}
	else if(avg >=75 && avg<85)
	{
		printf("Grade A");
	}
	else
	{
		printf("Distinction");
	}
	printf("\nTotal marks = \"%d\"\n",f);
	printf("Average is\"%.2f\"",avg);

}

