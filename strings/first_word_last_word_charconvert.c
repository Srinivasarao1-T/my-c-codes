#include<stdio.h>
#include<string.h>
void convert(char *ptr)
{


	if(ptr[0]>='a'&&ptr[0]<='z')
	{
              ptr[0]=ptr[0]-32;
	}
	else
	{
		ptr[0]=ptr[0]+32;
	}
	if(ptr[strlen(ptr)-1]>='a'&&ptr[strlen(ptr)-1]<='z')
	{
              ptr[strlen(ptr)-1]=ptr[strlen(ptr)-1]-32;
	}
	else
	{
		ptr[strlen(ptr)-1]=ptr[strlen(ptr)-1]+32;
	}
	
}
int main()
{
	char str[100];
	gets(str);
	int l=strlen(str);
	char *ptr=NULL;
        ptr=strtok(str," ");
	while(ptr!=NULL)
	{
		convert(ptr);
		ptr=strtok(NULL," ");
	}
	for(int i=0;i<l;i++)
	{
		if(str[i]=='\0')
		{
			str[i]=32;
		}
	}
	puts(str);
}
