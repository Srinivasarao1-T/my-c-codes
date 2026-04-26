#include<stdio.h>
int checkprime(int a)
{
	int c=0;
	for(int i=2;i<=a/2;i++){
	       if(a%i==0)
	       {
		       c++;
		       break;
	       }
	}
	if(c==0)
	{
		return 1;
        }
	return 0;

}
int main()
{
	int j;
	printf("number of inputs");
	scanf("%d",&j);
	int arr[j];
	for(int i=0;i<j;i++)
	{
		scanf("%d",arr+i);

	}
	for(int i=0;i<j;i++)
	{
		if(checkprime(*(arr+i)))
		{
			printf("%d ",*(arr+i));
		}
	}
}
