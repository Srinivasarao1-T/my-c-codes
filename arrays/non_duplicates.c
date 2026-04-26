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
        int d=0;
        for(int i=0;i<a;i++){
                d=0;

             for(int j=i+1;j<a;j++){
                     if(arr[i]==0)
                             continue;
                     if(arr[i]==arr[j])
                     {
                         d++;
                         arr[j]=0;
                     }
             }
             if(d==0 && arr[i]!=0)
             {
                   printf("%d ",*(arr+i));
             }
        }
      /*  for(int i=0;i<a;i++)
        {
                printf("%d ",arr[i]);
        }*/
}
