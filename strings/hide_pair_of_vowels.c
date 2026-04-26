#include<stdio.h>
#include<string.h>
int check(char ch){
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'o':
		case 'O':
		case 'u':
		case 'U':return 1;
	}
	return 0;
}
int main()
{
    char str[100];
    gets(str);
    int s=strlen(str);
    for(int i=0;i<s-1;i++){
	    if(check(str[i])){
		    if(check(str[i+1]))
				    {
				         str[i]='*';
					 str[i+1]='*';
				    }
	    }
    }
    puts(str);
} 
