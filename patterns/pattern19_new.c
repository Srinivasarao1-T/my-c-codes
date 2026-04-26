//*
//**
//***
//****
//***
//**
//*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
        int a,A;
        scanf("%d",&a);
        for(int i=-(a);i<=a;i++)
        {     
                A=abs(i);
                for(int j=1;j<=(a+1-A);j++)
                {
                        printf("*");
                }
                printf("\n");

        }

}

