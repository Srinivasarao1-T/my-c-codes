#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
        char str[10]={'0','1','2','3','4','5','6','7','8','9'};
	char str1[100];
        int a,i=0;
        scanf("%d",&a);
        if(a<0)
        {
             str1[i]='-';
	     i++;
        }
        a=abs(a);
        int t=a,d,s=0;
        while(t){
             d=t%10;
             s=s*10+d;
             t/=10;
        }
        t=s;
        while(t){
                d=t%10;
		str1[i]=str[d];
                t=t/10;
		i++;
        }
	puts(str1);
}
