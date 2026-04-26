//i/p: 171  o/p :harshad
//i/p:353   o/p:not
//171%(1+7+1) output is 0
//353%(3+5+3) output is not 0
#include<stdio.h>
int main()
{
	int a,sum=0,digit;
	scanf("%d",&a);
	int temp=a;
	while(a)
	{
	   digit=a%10;
	   sum=sum+digit;
	   a/=10;
	}
	if(temp%sum==0){
	         printf("harshad");
	}
	else
	{
		printf("not");
	}
}

