//******
// *****
//  **** 
//   ***
//    **  
//     *
#include<stdio.h>
#include<math.h>
int main()
{
        int a;
        scanf("%d",&a);
        for(int i=a;i>=1;i--)
        {
                for(int j=a;j>=1;j--)
                {
                       if(i<j){
			       printf(" ");
		       }
		       else{
				       printf("*");
		       }
                }
                printf("\n");

        }
}
                                     
