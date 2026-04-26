#include<stdio.h>
int main()
{
	int k;
	printf("enter the no of value");
	scanf("%d",&k);
        printf("enter no of letf shift");
	int arr[k],ls;
	scanf("%d",&ls);
	for(int i=0;i<k;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<ls;i++){
                  int temp=arr[0];
		  for(int j=0;j<k-1;j++)
		  {
			  arr[j]=arr[j+1];
		  }
		  arr[k-1]=temp;
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",*(arr+i));
	}

}
