//1
//12
//123
//1234
//12345
#include<stdio.h>
int main()
{
        int n,r,c,sp;
        scanf("%d",&n);
        for(r=1;r<=n;r++)
        {
                for(sp=1;sp<=r;sp++)
                {
                        printf("%d",sp);
                }
                        printf("\n");
        }
        return 0;
}

