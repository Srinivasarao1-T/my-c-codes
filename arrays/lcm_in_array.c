#include<stdio.h>
int main()
{
	int a;
	printf("enter the size of array\n");
	scanf("%d",&a);
	int arr[a];
	printf("enter the elemets\n");
	for(int i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	int h=arr[0];
	for(int i=0;i<a;i++)
	{
		if(arr[i]>h)
		{
			h=arr[i];
		}
	}
	int lcm;
	
  	for(int i=1;i>=1;i++){
		int c=0;
		int f=h*i;
		for(int j=0;j<a;j++){
			if(f%arr[j]==0)
			{
                             c++;
			}
		}
		if(c==a)
		{
                     lcm=f;
		     break;
		}
	}
	printf("%d",lcm);
}
