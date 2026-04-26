#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str=NULL;
//	str=(char*)malloc(10*sizeof(char));
	unsigned long int s,size;
	s=getline(&str,&size,stdin);
	str[s-1]='\0';
	printf("%s\n%lu\n%lu\n",str,size,s-1);
}
