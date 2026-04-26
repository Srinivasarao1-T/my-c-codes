#include<stdio.h>
int main()
{
	char str[5][100];
	for(int i=0;i<5;i++)
	{
	   gets(str[i],100,stdin);	
	}
	for(int i=0;i<5;i++)
	{
	   puts(str[i]);	
	}



}
