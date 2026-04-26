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
		    int flag=0,h=i;
		    i++;
		    for(i;check(str[i]);i++){
				    str[i]='*';
				    flag=1;
				    }
		    if(flag==1){
			    str[h]='*';
		    }

				    
            }
    }
    puts(str);
}

