#include<stdio.h>
#include<string.h>
int checkvowel(char c){
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			  return 1;
	}
	return 0;
}
void pass(char *ptr)
{
	for(int i=0;i<strlen(ptr);i++)
	{
		if(checkvowel(ptr[i]))
				{
					memmove(ptr+i,ptr+i+1,strlen(ptr+i+1));
					ptr[strlen(ptr)-1]='\0';
					break;
				}
	}
}
int main()
{
	char str[20];
	gets(str);
	char *ptr=NULL;
	ptr=str;
	char *p=NULL;
	pass(str);
	puts(str);
}
