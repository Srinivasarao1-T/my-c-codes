//1234321
//123 321
//12   21
//1     1
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int a,A;
        scanf("%d",&a);
        for(int i=0;i<a;i++)
        {
                for(int j=-(a-1);j<=a-1;j++)
                {        
                        A=abs(j);
                        if(A<i)
                        {
                                printf(" ");
                        }
                        else{
                                printf("%d",a-A);
                        }
                }
                printf("\n");

        }

}

