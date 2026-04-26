#include<stdio.h>
struct student
{
	int c;
	char ch;
}__attribute__((packed));
int main()
{
	struct student var;
	printf("%lu",sizeof(var));
}
