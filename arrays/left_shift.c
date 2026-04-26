#include<stdio.h>
int main()
{
	int s;
	scanf("%d",&s);
	int h;
	printf("how many left shift\n");
	scanf("%d",&h);
	int a[s];
	printf("enter the i/p");
	for(int i=0;i<s;i++){
		scanf("%d",a+i);
	}
	for(int i=0;i<s-h;i++){
		a[i]=a[i+h];
	}
	for(int i=s-h;i<s;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<s;i++)
	{
		printf("a[%d]=%d",i,*(a+i));
	}
	
}
