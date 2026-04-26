#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a,b,c,s,bb;
        scanf("%d",&a);
	s=a;
	while(1){
            printf("1:set 2:clear 3:toggle 4:status 5:reverse 6:binary 7:exit\n");
	    scanf("%d",&c);
	    switch(c)
	    {
		    case 1:
			    scanf("%d",&b);
			    s=s|(1<<b);
			    printf("%d",s);
			    break;
	            case 2:
			    scanf("%d",&b);
			    s=s&(~(1<<b));
			    printf("%d",s);
			    break;
	            case 3:
			    scanf("%d",&b);
			    s=s^(1<<b);
			    printf("%d",s);
			    break;
	            case 4:
			    scanf("%d",&b);
			    printf("%d",(s>>b)&1);
			    break;
	            case 5:
			    bb=0;
			    int c=31;
			    for(int i=0;i<=31;i++){
			       if(((s>>i)&1)==1){
                                   bb=bb+pow(2,c);       
			       }  
			       c--;
			    }
			    s=bb;
			    printf("%d",s);
			    break;
	           case  6:
			    for(int i=31;i>=0;i--){
			         printf("%d",(s>>i)&1);
			    }
                             break;
		   case  7:exit(0);
	            default:printf("invalid");
	    }
	}

}
