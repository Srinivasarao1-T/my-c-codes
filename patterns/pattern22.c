//AAAA
// BBB
//  CC
//   D
//  CC 
// BBB
//AAAA
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,ch=65,aa;
	scanf("%d",&a);
	ch=ch+a;
	for(int i=-(a);i<=a;i++)
	{
               if(i>0){
                   aa=-i;
	       }	 
	        else{
			aa=i;
		}	
		for(int j=a;j>=0;j--)
		{ 
		         if((abs(i)+1)-j>0){
				 printf("%c",ch+aa);
			 }
		         else{
			printf(" ");
			 }
		}
		printf("\n");
	}
}
