//******
// *****
//  **** 
//   ***
//    **  
//     *
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		for(int j=a-i;j<a;j++)
		{
			printf(" ");
		}
		for(int k=i+1;k<=a;k++)
		{
			printf("*");
		}
		printf("\n");

	}
}
