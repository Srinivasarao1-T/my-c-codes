#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,c=0;
	scanf("%d",&a);
       for(i = 2;i<=sqrt(a);i++){
           if(a%i==0){
		 c++;
		 break;
	   }
       }
       if(c==1)
       {
	       printf("not");
       }
       else
       {
	       printf("prime");
       }
}
