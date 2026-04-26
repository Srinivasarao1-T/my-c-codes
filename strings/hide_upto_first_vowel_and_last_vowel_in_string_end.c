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
void firstvowel(char *str,int *f,int *l)
{
        int flag=0;
        for(int i=0;i<strlen(str);i++)
        {
                if(checkvowel(str[i])){
                          *l=i;
                   }
                if(checkvowel(str[i])&&flag==0)
                {
                        flag=1;
                        *f=i;
                }
        }
}
int main()
{
        char str[100];
        gets(str);
     int f=0,l=0;
     firstvowel(str,&f,&l);

     if(f==l)
     {
             printf("one string avalible");
             return 0;
     }
     memset(str,'*',f+1);
     memset(str+l,'*',strlen(str+l));
     puts(str);
}
