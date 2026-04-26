#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];
   gets(str);
   char sub[100];
   gets(sub);
   int pos;
   scanf("%d",&pos);
   memmove(str+pos-1+strlen(sub),str+pos-1,strlen(str+pos-1)+1);
   memmove(str+pos-1,sub,strlen(sub));
   puts(str);

}
