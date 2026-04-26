#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100];
	gets(str);
	char *ftr=strchr(str,32);
	char *ltr=strrchr(str,32);
	long int f=ftr-str,l=ltr-str;
	char s1[100];
	int k=0;
	f++;
	l++;
       for(int i=l;i<=strlen(str);i++)
       {
         s1[k++]=str[i];
       }
       char s2[100];
       k=0;
       for(int i=0;i<f-1;i++)
       {
           s2[k++]=str[i];
       }
       s2[k]='\0';
       puts(s1);
       puts(s2);
       memmove(str,str+f-1,strlen(str+f));
       puts(str);
       strcat(s1,str);
       puts(s1);
       memmove(s1+l+1,s2,strlen(s2)+1);
       puts(s1);
}
