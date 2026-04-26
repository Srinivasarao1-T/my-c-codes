#include<stdio.h>
#include<stdlib.h>
int main()
{
   char arr[15];
   srand(getpid());
   //int a= (rand()%10);
   //arr[a];
   printf("%d no of elements\n",sizeof(arr)/sizeof(arr[0]));
   for(int i=0;i<15;i++){
        int a=rand()%26+65;
	int b=rand()%26+97;
	int r=a-65;
	int s=b-97;
	if(s>r){
		arr[i]=a;
	}
	if(s<r){
		arr[i]=b;
	}
	if(s==r){
		arr[i]=b;
	}

   }
   for(int i=0;i<15;i++)
   {
	   printf("%c ",arr[i]);
   }
   printf("\n");
   for(int i=0;i<15;i++){
           switch(arr[i])
           {
                   case 'A':
		   case 'a':
                   case 'E':
	           case 'e':		   
                   case 'I':
	           case 'i':
                   case 'o':
		   case 'u':
                   case 'O':
                   case 'U':
                            printf("%c ",arr[i]);
                            break;
                   default :break;
           }
   }
}

