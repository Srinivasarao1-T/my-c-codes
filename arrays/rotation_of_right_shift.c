#include<stdio.h>
int main()
{
        int s;
        printf("size of arr");
        scanf("%d",&s);
        int  a[s],b[s];
        printf("no of right shift rotations");
        int  h;
        scanf("%d",&h);
        printf("no of i/p");
        for(int i=0;i<s;i++){
                scanf("%d",a+i);
                b[i]=*(a+i);
        }
        for(int i=s-1;i>=h;i--)
        {
                a[i]=a[i-h];
        }
	int t=s-1;
        for(int i=h-1;i>=0;i--){
                a[i]=b[t];
		t--;
        }
        for(int i=0;i<s;i++){
                printf("\n%d",*(a+i));
        }
}
