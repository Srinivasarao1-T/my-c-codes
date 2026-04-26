#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,u;
	scanf("%d%d",&a,&b);
	int i,d,c,g=0;
	for( i=a;i<=b;i++)
	{
		c=i;
		u=0;
		g=0;
		while(c)
		{
			d=c%10;
			if(d==3){
			    g=1;
			    break;
			}
			c/=10;
		}
		if(g==1){
			for(int j=1;j<=i;j++){
			        if(i%j==0)
				{
					u++;
				}
			}
		}
	
		if(u==2){
			printf("%d ",i);
		      }
		
	}
}
/*#include<stdio.h>
int checknum(int num)
{
	int n=num;
	while(n)
	{
		int digit=n%10;
		if(digit==3)
		{
			return 1;
		}
		n/=10;
	}
	return 0;
}
int primenum(int num)
{
	int v=2;
	while(v<(num/2))
	{
		if(num%v==0)
		{
			return 0;
		}
		v++;
	}
	return 1;
}
int main()
{
	int max,min;
	printf("Enter a min & max values\n");
	scanf("%d %d",&min,&max);
	for(int i=min;i<=max;i++)
	{
		if(checknum(i))
		{
			if(primenum(i))
			{
				printf("%d,",i);
			}

		}
	}
}*/
