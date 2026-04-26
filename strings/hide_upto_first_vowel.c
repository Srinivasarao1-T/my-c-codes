#include<stdio.h>
#include<string.h>
int checkvowel(char s)
{
	switch(s)
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
int firstvowel(char *str)
{
	for(int i=0;i<strlen(str);i++)
	{
		if(checkvowel(str[i])){
                          return i;
	           }
	}
	return -1;
}
int main()
{
	char str[100];
	gets(str);
     int res=firstvowel(str);
     if(res==-1)
     {
	     printf("not vowels");
	     return 0;
     }
     memset(str,'*',res+1);
     puts(str);
}
