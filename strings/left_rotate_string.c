#include<stdio.h>
#include<string.h>
void rotation(char *str,int r)
{
        for(int i=1;i<=r;i++)
        {
                int t=str[0];
                for(int j=0;j<strlen(str)-1;j++)
                {
                          str[j]=str[j+1];
                }
                str[strlen(str)-1]=t;
        }
}
int main()
{
    char str[100];
    gets(str);
    int rot;
    scanf("%d",&rot);
    rotation(str,rot);
    puts(str);
}
