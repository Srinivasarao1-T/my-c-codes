#include<stdio.h>
#include<stdlib.h>
int main()
{
   int arr[55555];
   srand(getpid());
   int a= (rand()%10);
   arr[a];
   printf("%d no of elements",a);
   for(int i=0;i<a;i++){
          arr[i]=rand()%100;
   }
   for(int i=0;i<a;i++){
	  printf("%d ",arr[i]);
   }
}
