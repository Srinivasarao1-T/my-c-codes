#include<stdio.h>
#include<string.h>
void printS(char (*p)[10],int n)
{
        for(int i=0;i<n;i++)
        {
                printf("%s\n",p[i]);
        }
}
void printPTR(char **p,int n)
{
        for(int i=0;i<n;i++)
        {
                printf("%s\n",p[i]);
        }
}
void sortS(char (*p)[10],int n)
{
        char temp[25];
        for(int i=n-1;i>0;i--)
        {
                for(int j=0;j<i;j++)
                {
                        if((strcmp(p[j],p[j+1]))>0)
                        {
                                strcpy(temp,p[j]);
                                strcpy(p[j],p[j+1]);
                                strcpy(p[j+1],temp);
                        }
                }
        }
}
void sortP(char **p,int n)
{
        char *temp;
        for(int i=n-1;i>0;i--)
        {
                for(int j=0;j<i;j++)
                {
                        if((strcmp(p[j],p[j+1]))>0)
                        {
                                temp=p[j];
                                p[j]=p[j+1];
                                p[j+1]=temp;
                        }
                }
        }
}
int main()
{
        char arr[5][10]={"int","char","void","float","array"};
        char *ptr[5]={"signed","unsigned","long","volatile","const"};
        printf("%lu %lu\n",sizeof(arr),sizeof(ptr));
        printf("%s\n",arr[2]);
        printf("%s\n",ptr[2]);
        printf("%c\n",arr[2][2]);
        printf("%c\n",ptr[2][2]);
        printf("Before sorting the elements\n");
        printS(arr,5);
        printPTR(ptr,5);
        printf("After sorting the elments\n");
        sortS(arr,5);
        sortP(ptr,5);
	printf("after sorting of arr elements\n");
        printS(arr,5);
	printf("after sorting of ptr elements\n");
        printPTR(ptr,5);
}

