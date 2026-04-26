#include<stdio.h>
int main()
{
	int arr[30],a;
	scanf("%d",&a);
	printf("enter the value\n");
	for(int i=0;i<a;i++)
	{
		scanf("%d",arr+i);
	}
	int h=0,sc=0;
	for(int i=0;i<a;i++)
	{
		if(h<arr[i])
		{
	             sc=h;
                     h=arr[i];
		     
		}
	}
	printf("\nsecond hig value = %d\n",sc);
	
}
