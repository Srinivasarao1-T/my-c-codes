#include<stdio.h>
int main()
{
	int s;
	printf("size of arr");
	scanf("%d",&s);
	int  a[s];
	printf("no of right shift");
	int  h;
	scanf("%d",&h);
	printf("no of i/p");
	for(int i=0;i<s;i++){
		scanf("%d",a+i);
	}
	for(int i=s-1;i>=h;i--)
	{
		a[i]=a[i-h];
	}
	for(int i=h-1;i>=0;i--){
		a[i]=0;
	}
	for(int i=0;i<s;i++){
		printf("\n%d",*(a+i));
	}
}
