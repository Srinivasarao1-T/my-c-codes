//i/p :14 o/p: deficient
//i/p :12 o/p:not
//factor 1+2+7=10   10 is not greater than 14 so it is deficient
//factoe 1+2+3+4+6=16   16>12 so not
#include<stdio.h>
int main()
{
	int a,c=0,i=1;
	scanf("%d",&a);
	while(i<a){
               if(a%i==0){
		       c=c+i;
	       }
	       i++;
	}
	if(a>c){
		printf("deficient");
	}
	else{
	       printf("not");
	}
			
			

}
