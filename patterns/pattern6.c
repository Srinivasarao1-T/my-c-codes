//1
//22
//333
//4444
//55555
#include<stdio.h>
int main()
{
	int n,r,c,sp;
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(sp=1;sp<=r;sp++)
		{
			printf("%d",r);
		}
			printf("\n");
	}
	return 0;
}

