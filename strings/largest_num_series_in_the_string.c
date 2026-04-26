#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int series(char *str,int p)
{
	int c=0;
	for(int i=p;i<strlen(str);i++)
	{
		if(str[i]>=48&&str[i]<=57)
		{
			c++;
		}
		else
		{
			return c;
		}
	}
	return c;
	
}
int main()
{
        char str[100];
       gets(str);
       int n,l=0;
       for(int i=0;i<strlen(str);i++)
       {
	        n=0;
	       if(str[i]>=48&&str[i]<=57)
	       {
		       n=series(str,i);
		       i=i+n;
	       }
	       if(n>l)
	       {
		       l=n;
	       }
       }       
       printf("%d",l);
}
