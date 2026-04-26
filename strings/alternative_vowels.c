#include<stdio.h>
#include<string.h>
int vowel(char s)
{
	switch(s)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'O':
		case 'E':
		case 'I':
		case 'U':
			return 1;
		default:
			return 0;
	}
}
int main()
{
	char str[100];
	gets(str);
	int flag=0;
	for(int i=0;i<strlen(str);i++){
		if(vowel(str[i])&&flag==0)
		{
                   flag=1;
		   memmove(str+i,str+i+1,strlen(str+i+1)+1);
		   i--;
		}
		if(vowel(str[i])&&flag==1)
		{
			flag=0;
		}
	}
	puts(str);
}
