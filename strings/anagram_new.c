#include<stdio.h>
#include<string.h>
void asc(char *);
int main()
{
   char str[100],str2[100];
    gets(str);
    gets(str2);
    asc(str);
    asc(str2);
    if(strcmp(str,str2)==0)
    {
	    printf("anagram");
    }
    else
    {
	    printf("not anagram");
    }
}
void asc(char *str)
{
    for(int i=0;i<strlen(str)-1;i++)
    {
            for(int j=i+1;j<strlen(str);j++)
            {
                    if(str[i]>str[j]){
                            int t=str[i];
                            str[i]=str[j];
                            str[j]=t;
                    }
            }
    }
}
