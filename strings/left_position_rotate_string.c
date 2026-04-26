#include<stdio.h>
#include<string.h>
void rotation(char *str,int r,int p)
{
        for(int i=1;i<=r;i++)
        {
                int t=str[p];
                for(int j=p;j<strlen(str)-1;j++)
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
    int rot,pos;
    printf("enter rotation");
    scanf("%d",&rot);
    printf("enter the position");
    scanf("%d",&pos);
    rotation(str,rot,pos-1);
    puts(str);
}
