//i/p:153  o/p:armstrong
//i/p:121 o/p:not
//i/p:1634 o/p:armstrong
//1^3 +5^3+3^3 ==153
//1^4+6^4+3^4+4^4 ==1634
#include<stdio.h>
int main()
{
        int a,s=0,d,i;
        scanf("%d",&a);
        int temp=a,ss=0,c=0;
         while(a){
             d=a%10;
             c++;
             a/=10;
        }
        a=temp;
        while(temp){
                d=temp%10;
                i=0;
                ss=1;
                while(i<c)
                {
                  ss=ss*d;
                  i++;
                }
                s=s+ss;
                temp=temp/10;

        }
        if(s==a)
        {
                printf("armstrong");
        }
        else
        {
                printf("not armstrong");
        }
}

