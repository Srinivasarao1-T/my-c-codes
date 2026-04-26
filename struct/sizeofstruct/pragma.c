#include<stdio.h>
#pragma pack(1)
struct student
{
	int c;
	char ch;
};
int main()
{
	struct student var;
	printf("%lu",sizeof(var));
}
