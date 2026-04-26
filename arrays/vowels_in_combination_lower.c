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
          arr[i]=(rand()%26)+97;//  (rand()%(max-min)+1)+min
   }
   for(int i=0;i<5;i++){
           switch(arr[i])
           {
                   case 'a':
                   case 'e':
                   case 'i':
                   case 'o':
                   case 'u':
                            printf("%c ",arr[i]);
                            break;
                   default :break;
           }
   }
}

