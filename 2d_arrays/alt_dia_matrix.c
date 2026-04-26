#include<stdio.h>
int main()
{
	int arr[3][3];
        for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			 scanf("%d",&arr[i][j]);
		}
	}
	printf("\nthe array is\n");
        for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			 printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the output is\n");
        for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			 if(i+j==2)
			 {
		            printf("%d ",arr[i][j]);
			 }
			 else
			 {
                            printf("0 ");
			 }
		}
		printf("\n");
	}

}
