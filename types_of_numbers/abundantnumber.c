//i/p :12  o/p:abundant
//i/p: 6    o/p:not
//factor:1+2+3+4+6=16   16>12
//factot:1+2+3=6        6 is equal to 6 so it is not abundant number but it is perfect number
#include<stdio.h>
int main()
{
	int a,i=1,b=0,digit,temp;
	scanf("%d",&a);
	temp=a;
	while(i<a){
            if(a%i==0){
	       b=b+i;
	    }
	    i++;
	}
	if(a<b)
	{
		printf("abundant");
	}
	else{
	          printf("not");
	}

}
