#include<stdio.h>
int main()
{
	int row,col;
	printf("enter rows and coloumns\n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("enter the arrray\n");
        for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			 scanf("%d",&arr[i][j]);
		}
	}
	printf("\nthe array is\n");
        for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			 printf("%02d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the output is\n");
	int o=0;
        for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			 if(i==0||i+j==row-1||i==row-1)
			 {
		            printf("%02d ",arr[i][j]);
			 }
			 else
			 {
                            printf("%02d ",o);
			 }
		}
		printf("\n");
	}

}
