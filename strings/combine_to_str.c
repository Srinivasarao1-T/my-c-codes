#include<stdio.h>
int main()
{
	char str[100],str2[100];
	gets(str);
	gets(str2);
	strcat(str,str2);
        puts(str);
}
