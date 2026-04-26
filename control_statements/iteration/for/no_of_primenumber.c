//i/p :5  ip/2: 6   o/p :7 11 13 17 19
//5=no of prime numbers to print
//6=starts from
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,cc,c=0;
	scanf("%d%d",&a,&b);
	for(int i=b;i>=b;i++){
		cc=0;
		
	  for(int j=2;j<=sqrt(i);j++){
		  if(i%j==0)
		  {
			  cc++;
			  break;
		  }

	  }
	  if(cc==0){
		  printf("%d ",i);
		  c++;
	  }
	  if(c==a){
		  break;
	  }
	}
}
