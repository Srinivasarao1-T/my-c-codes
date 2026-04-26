#include<stdio.h>
#include<string.h>
int main()
{
	char d1[100],d2[100],d3[200];
	gets(d1);
	gets(d2);
	int pos;
	bzero(d3,200);
	scanf("%d",&pos);
	strncpy(d3,d1,pos-1);
	puts(d3);
	strcat(d3,d2);
	puts(d3);
	bzero(d2,100);
	strncpy(d2,d1+pos-1,strlen(d1));
	strcat(d3,d2);
	puts(d3);
}
