#include<stdio.h>
#include<string.h>
int main()
{
     char str[100];
     gets(str);
     int f,l;
     puts("enter the positions");
     scanf("%d%d",&f,&l);
     puts("enter the no of rotation");
     int rot;
     scanf("%d",&rot);
     for(int i=1;i<=rot;i++){
                      int t=str[f-1];
		      memmove(str+f-1,str+f,l-f);
		      str[l-1]=t;
      }
     puts(str);
}
