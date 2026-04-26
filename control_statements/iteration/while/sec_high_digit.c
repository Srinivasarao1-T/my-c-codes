//i/p :6885  o/p:6
#include<stdio.h>
int main()
{
	int a,h=0,sc=0,d;
	scanf("%d",&a);
	while(a)
	{
		d=a%10;
		if(d>h){
			
			sc=h;
			h=d;
		}
		else{
			if(d>sc  && d!=h)
			{
				sc=d;
			}
		}
		a/=10;
	}
	printf("second highest=%d",sc);

}
