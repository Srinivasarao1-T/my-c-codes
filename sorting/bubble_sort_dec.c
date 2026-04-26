#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        gets(str);
        int flag=0;
        for(int i=strlen(str)-1;i>0;i--)
        {
                flag=0;
                for(int j=0;j<i;j++)
                {
                        if(str[j]<str[j+1])
                        {
                                flag=1;
                                int t= str[j];
                                str[j]=str[j+1];
                                str[j+1]=t;
                        }
                }
                if(flag==0)
                {
                        break;
                }
        }
        puts(str);
}
