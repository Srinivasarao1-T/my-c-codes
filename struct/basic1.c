#include<stdio.h>
struct student{
	int roll;
	int phone;
}var={1,12345},var2={2,1233};
int main()
{
	printf("%d",var.roll);
	printf("%d",var.phone);
	printf("%d",var2.roll);
	printf("%d",var2.phone);
}
