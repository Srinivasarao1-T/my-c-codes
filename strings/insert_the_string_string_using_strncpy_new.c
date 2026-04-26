#include<stdio.h>
#include<string.h>
int main()
{
      char str1[100],str2[100];
      gets(str1);
      gets(str2);
      int pos;
      scanf("%d",&pos);
      pos=pos-1;
      for(int i=strlen(str1)-1;i>=pos;i--){
             str1[strlen(str2)+i]=str1[i];
      }
      strncpy(str1+pos,str2,strlen(str2));
      puts(str1);



}
