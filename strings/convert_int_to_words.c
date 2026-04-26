#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	char str[10][20]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int a;
	scanf("%d",&a);
	if(a<0)
	{
	     printf("minus ");
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
		printf("%s ",str[d]);
		t=t/10;
	}
}
