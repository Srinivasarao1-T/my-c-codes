#include<stdio.h>
int main()
{
        int s;
        scanf("%d",&s);
        int h;
        printf("how many left shift\n");
        scanf("%d",&h);
        int a[s],b[s];
        printf("enter the i/p");
        for(int i=0;i<s;i++){
                scanf("%d",a+i);
		b[i]=*(a+i);
        }
        for(int i=0;i<s-h;i++){
                a[i]=a[i+h];
        }
	int c=0;
        for(int i=s-h;i<s;i++)
        {
                a[i]=b[c];
		c++;
        }
        for(int i=0;i<s;i++)
        {
                printf("a[%d]=%d",i,*(a+i));
        }
}
