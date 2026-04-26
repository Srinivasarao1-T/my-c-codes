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
        int d=arr[0];
        for(int i=0;i<a;i++){
             for(int j=0;j<a;j++){
                     if(arr[i]>arr[j])
                     {
                             int temp=arr[i];
                             arr[i]=arr[j];
                             arr[j]=temp;
                     }

             }
        }
        for(int i=0;i<a;i++)
        {
                printf("%d ",arr[i]);
        }
}
