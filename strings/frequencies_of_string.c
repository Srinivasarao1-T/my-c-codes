#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int fre[200]={0};
	gets(str);
	
	for(int i=0;i<strlen(str);i++)
	{
		fre[str[i]]++;
	}
	puts("the frequeiences are:");
	for(int i=1;i<200;i++)
	{
		if(fre[i]!=0)
		{
			printf("\'%c\' = %d \n",i,fre[i]);
		}
	}
}
