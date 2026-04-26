//i/p=145 o/p:strong
//i/p=150 o/p:not
//1!+4!+5! ==145   strong
//1!+5!+0! !=150   not
#include<stdio.h>
int main()
{
	int a,f=1,d;
	scanf("%d",&a);
	int temp=a,ff=0,i;
	while(a){
		d=a%10;
		f=1;
		i=2;
		if(d==0 ||d==1){
			f=1;
		}
		else
		{
		        while(i<=d)
			{
				f=f*i;
				i++;

			}
		}
		ff=ff+f;
		a=a/10;
	}
	if(temp==ff){
		printf("strong");
	}
	else
	{
		printf("not");
	}

}
