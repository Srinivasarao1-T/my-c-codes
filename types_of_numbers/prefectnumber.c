//i/p :6   o/p:perfect
//i/p :12 o/p:not
//factors 1+2+3=6
//        1+2+3+4+6=16
#include<stdio.h>
int main()
{
	int sum=0,num,i=1;
        scanf("%d",&num);
         while(i<num)
	 {
		 if(num%i==0){
			 sum=sum+i;
		 }
		 i++;
	 }
	 if(sum==num)
	 {
		 printf("perfect");
	 }
	 else
	 {
		 printf("not");
	 }
}
