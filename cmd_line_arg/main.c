#include<stdio.h>
#include<stdlib.h>
int main(int a,char **ar)
{
	int v1,v2;
	if(a>=3)
	{
		v1=atoi(ar[1]);
		v2=atoi(ar[2]);
	}
	else
	{
		scanf("%d%d",&v1,&v2);
	}
	printf("%d",v1+v2);
}
