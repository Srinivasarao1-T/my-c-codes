#include<stdio.h>
int main()
{
   int arr[5],pos,n; 
   printf("enter the size of array\n");
   scanf("%d",&n);
   arr[n];
   printf("enter the values\n");
   for(int i=0;i<n;i++){
	   scanf("%d",arr+i);
   }

   printf("enter the position value\n");
   scanf("%d",&pos);
   int ls;
   printf("how many shitfs\n");
   scanf("%d",&ls);
   for(int i=1;i<=ls;i++){
	   int t=arr[0];
	   for(int j=0 ;j<pos;j++){
               arr[j]=arr[j+1];
	   }
	   arr[pos-1]=t;
   }
   for(int i=0;i<n;i++){
	   printf("%d ",arr[i]);
   }
}
