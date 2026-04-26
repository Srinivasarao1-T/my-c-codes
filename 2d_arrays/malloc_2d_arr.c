#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int row,col;
    scanf("%d%d",&row,&col);
    arr=(int *)malloc(row*col*sizeof(int));
    int size=sizeof(arr)/sizeof(int);
    printf("%d",size);
}  
