//A
//**
//CCC
//****
//EEEEE
#include<stdio.h>
int main()
{
        int n,r,c,sp,ch=64;
        scanf("%d",&n);
        for(r=1;r<=n;r++)
        {

		if(r%2==1){
                for(sp=1;sp<=r;sp++)
                {
                        printf("%c",ch+r);
                }
		}
		else{
		for(sp=1;sp<=r;sp++)
                {
                        printf("*");
                }
                }
                        printf("\n");
        }
        return 0;
}

