#include<stdio.h>
int main()
{
        int a;
        scanf("%d",&a);
        printf("enter the values");
        int arr[a];
        for(int i=0;i<a;i++){

        scanf("%d",&arr[i]);
        }
        for(int i=0;i<a;i++){

             for(int j=i+1;j<a;j++){
                     
                     if(arr[i]==arr[j])
                     {
                        for(int k=j;k<a;k++)
			{
				arr[k]=arr[k+1];
			}
			a--;
			i--;
                     }
             }
        }
       for(int i=0;i<a;i++)
        {
                printf("%d ",arr[i]);
        }
}
