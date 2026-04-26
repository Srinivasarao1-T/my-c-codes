//i/p: 1223 o/p:31
//i/p:  123 o/p:123
//i/p:3443  o/p:no
//i/p:9999 o/p:all digits are same
#include<stdio.h>
int main()
{
	int t,f=1,b=1,j,a,d,p=1,m,c,count=0,cou=0;
	scanf("%d",&a);
	c=a%10;
	b=a;
	while(a){
	     d=a%10;
	     m=0;
	     f=f*10;
	     if(d==c){
	        cou++;
	     }
	     t=b;
	     while(t){
                  j=t%10;
		  if(j==d)
		  {
			  m++;
		  }
		  t/=10;
	     }
	     a=a/10;
	     count++;
	     if(m==1){
	         printf("%d",d);
	p++;	 
	     }
	}
	if(cou==count){
           printf("all digits are equal");
	   return 0;
	}
	if(p==1){
           printf("no");
	}


}
