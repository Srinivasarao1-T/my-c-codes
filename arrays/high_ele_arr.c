#include<stdio.h>
int main()
{
	int a;
	printf("enter the size of arr");
	scanf("%d",&a);
	int arr[a];
	printf("enter the elements");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	int g=arr[0];
	for(int i=0;i<a;i++)
	{
	     if(g<=*(arr+i))
			     {
			         g=arr[i]; 
			     }	     
        }
		printf("The highest value is = %d",g);
	

}
