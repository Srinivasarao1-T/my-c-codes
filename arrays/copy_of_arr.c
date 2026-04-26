#include<stdio.h>
int main()
{
	int size;
	printf("enter size of array value");
	scanf("%d",&size);
	int arr[size],b[size];
	for (int i=0;i<size;i++)
	{
		scanf("%d",arr+i);
		b[i]=arr[i];
	}
	for (int i=0;i<size;i++)
	{
		printf("arr[%d]=%d",i,arr[i]);
         }
	for (int i=0;i<size;i++)
	{
		printf("b[%d]=%d",i,b[i]);
	}
}
