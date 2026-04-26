//55555
//54444
//54333
//54332
//54321
#include<stdio.h>
int main()
{
        int a;
        scanf("%d",&a);
        for(int i=a;i>=1;i--)
        {
                for(int j=a;j>=1;j--)
                {
                        if(j<=i)
			printf("%d",i);
			else
			{
				printf("%d",j);
			}
                }
                printf("\n");

        }

}

