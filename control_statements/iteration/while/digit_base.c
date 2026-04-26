//i/p :999  o/p:9
//i/p :998994 o/p:3
//9+9+9 =27  2+7=9
//9+9+8+9+9+4=48 4+8=12  1+2=3
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int d,s=0;
	while(1){
 
	       s=0;
	       while(a){
		       d=a%10;
		       s=s+d;
		       a/=10;
	       }
	       if(s>9){
		       a=s;
	       }
	       else{
		       break;
	       }

	}
	printf("%d",s);
}
