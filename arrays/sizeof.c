#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7};
	int a=sizeof(arr)/sizeof(arr[0]);
	printf("%d",a);
	char str[10]={"hai hello "};
	int b=sizeof(str)/sizeof(str[1]);
	printf("%d",b);
}
