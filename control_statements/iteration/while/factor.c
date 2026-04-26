//i/p :8    o/p :1,2,4,8
//i/p :18   o/p :1,2,3,6,9,18
#include<stdio.h>
int main()
{
	int a,b=1;
	scanf("%d",&a);
	while(b<=a-1){
            if(a%b==0){
               printf("%d,",b);

	    }
	    b++;
	}
	printf("%d",a);
}
