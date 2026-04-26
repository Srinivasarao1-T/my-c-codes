//A
//BB
//CCC
//DDDD
//EEEEE
#include<stdio.h>
int main()
{
        int n,r,c,sp,ch=64;
        scanf("%d",&n);
        for(r=1;r<=n;r++)
        {
                for(sp=1;sp<=r;sp++)
                {
                        printf("%c",r+ch);
                }
                        printf("\n");
        }
        return 0;
}

