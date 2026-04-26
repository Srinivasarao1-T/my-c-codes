#include<stdio.h>
int main()
{
        int k;
        printf("enter the no of value");
        scanf("%d",&k);
        printf("enter no of right shift");
        int arr[k],rs;
        scanf("%d",&rs);
        for(int i=0;i<k;i++){
                scanf("%d",&arr[i]);
        }
        for(int i=0;i<rs;i++){
                  int temp=arr[k-1];
                  for(int j=k-1;j>0;j--)
                  {
                          arr[j]=arr[j-1];
                  }
                  arr[0]=temp;
        }
        for(int i=0;i<k;i++)
        {
                printf("%d ",*(arr+i));
        }

}

