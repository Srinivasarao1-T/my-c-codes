#include<stdio.h>
int main()
{
    int arr2[3][3],arr[3][3];
    printf("enter the first matrix\n");
    for (int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++){
                    scanf("%d",&arr[i][j]);
             }
    }
    printf("enter the second matrix\n");
    for (int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++){
                    scanf("%d",&arr2[i][j]);
             }
    }
    for (int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++){
                   printf("%d ",arr[i][j]);
             }
            printf("\n");
    }
    printf("\n");
    for (int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++){
                   printf("%d ",arr2[i][j]);
             }
            printf("\n");
    }
    printf("\n");
    int res;
    for (int i=0;i<3;i++)
    {
            for(int j=0;j<3;j++){
		    res=0;
		    for(int k=0;k<3;k++){
			    res+=(arr[i][k]*arr2[k][j]);
		    }
		    printf("%d ",res);
             }
            printf("\n");
    }
}
