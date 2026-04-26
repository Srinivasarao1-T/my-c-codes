#include<stdio.h>

int main()
{
   int num,sum=0,d,temp;
   scanf("%d",&num);
    if(num%2!=0)
    {  
	    d=num%10;
	    sum=sum+d;
	    num=num/10;
       while(num)
       {
	       d=num%100;
	       d=d/10;
	       if(d%2!=0)
	       {
		       sum+=d;
	       }
	       num/=100;
       }
    }
    else{
       while(num)
         {
	   d=num%100;
	   d=d/10;
	   sum=sum+d;
	   num/=100;
       }
    }
   printf("%d",sum);
}
