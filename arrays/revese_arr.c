#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("enter the value");
	int arr[a];
	int r=a/2;
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a/2;i++)
	{
		int t=arr[i];
		arr[i]=arr[a-1-i];
		arr[a-i-1]=t;
	}
	for(int i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}
}
