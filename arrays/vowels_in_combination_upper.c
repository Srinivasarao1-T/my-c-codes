#include<stdio.h>
#include<stdlib.h>
int main()
{
   char arr[5];
   srand(getpid());
   //int a= (rand()%10);
   //arr[a];
   printf("%d no of elements",sizeof(arr)/sizeof(arr[0]));
   for(int i=0;i<5;i++){
          arr[i]=rand()%26+65;
   }
   for(int i=0;i<5;i++){
	   switch(arr[i])
	   {
		   case 'A':
	           case 'E':
	           case 'I':
	           case 'O':
	           case 'U':
                            printf("%c ",arr[i]);
			    break;
	           default :break;
	   }
   }
}

