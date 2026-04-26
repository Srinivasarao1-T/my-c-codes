#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	a=b+34;
	c=b+64;
	b=a+a;
	printf("%d.. %x...%o",a,b,c);
	b=b+b;
	c=c+b;
	a=a+b;
	printf("%d..%x..%o",a,c,b);
	return 0;
}
