#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	/*int *p;
	p=malloc(100);
	printf("%lu %lu",sizeof(p),sizeof(*p));*/
	char str[20]="vector";
	char *p;
	/*
//	p=strdup(str);
	p=malloc(20);
	strcpy(p,str);*/
	p=str;
	//fgets(p,20,src)
	printf("%s",p);
}
