#include<stdio.h>
int main()
{
	int a,d,c=0,b=0;
	scanf("%d",&a);
	int  t=a;
	c=a%10;
	while(a){
		d=a%10;
		if(c!=d){
	         b=1;
		 break;
		}
		a=a/10;
	
	}

	if(b==0){
		printf("Equal");
	}
	else{
		printf("not");
	}
}
