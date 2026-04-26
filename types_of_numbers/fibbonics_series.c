//i/p:5   o/p:0 1 1 2 3 
//i/p:7  o/p :0 1 1 2 3 5 8
// 0 1 (0+1)=1 (1+1) =2 (1+2)=3 (2+3)=5
#include<stdio.h>
int main()
{
   int a,pre=0,curr=0,post=1;
   scanf("%d",&a);
   curr =pre+post;
   if(a>=0)
   {
	   printf("0");
   }
   if(a>=1)
   {
	   printf(" 1 ");
   }
   for(int i=2;i<a;i++)
   {
	   pre=post;
	   post=curr;
	   printf("%d ",curr);
	   curr=post+pre;
	   //printf("%d ",curr);

   }
}
