#include<stdio.h>
#define min(a,b) (a<b?a:b);
int main()
{
	int a;
	printf("enter the size of array\n");
	scanf("%d",&a);
	int arr[a],r;
	for(int i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	r=arr[0];
	for(int i=0;i<a;i++){
              r=min(r,arr[i]);
	}
	for(int i=r;i>=1;i--)
	{
		int c=0;
		if(r%i==0)
		{
			for(int j=0;j<a;j++)
			{
				if(arr[j]%i==0)
				{
					c++;
				}
			}
		}
		if(c==a){
			printf("%d",i);
			break;
		}
	}
}
