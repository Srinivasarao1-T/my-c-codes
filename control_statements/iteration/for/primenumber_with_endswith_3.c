//i/p1: 3 , i/p2: 15 o/p:3,13
//i/p1: 5 , i/p2: 10 o/p :no
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
	      if(i%10==3)
	      {
		      c=0;
		      for(int j=1;j<=sqrt(i);j++){
		            if(i%j==0){
                                 c++;
			
			    }
		      }
		      if(c==1)
		      {
			      printf("%d ",i);
		      }
	      }

	}
}

