// i/p :1234  o/p :ascendeing
// i/p :5642  o/p :not
// i/p :5555  o/p :equal
#include<stdio.h>
int main()
{
	int n,d,g=10;
	scanf("%d",&n);
	int dd=n%10,c=0,cc=0;
	while(n)
	{
		d=n%10;
	       if(d==dd){
                 c++;
		}
		if(d<=g){
			g=d;
		}
		else {
			break;
		}
		n/=10;
		cc++;
	}
        if(n!=0){
		printf("not");
	
	}
	else if(c==cc){
		printf("equal");
	}
	else
		printf("ascend");

}
