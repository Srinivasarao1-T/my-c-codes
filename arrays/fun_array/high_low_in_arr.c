#include<stdio.h>
void high(int* a,int s,int *p){
	int max=a[0];
        //int size=sizeof(a)/sizeof(a[0]);
	// int *ptr=a;
	int size=*(&a+1)-a;
	printf("     ..%d..   ",size);
//	printf("\n%x..%d..%x\n",ptr,size,a);
	for(int i=0;i<s;i++)
	{
		if(max<a[i])
		{
                   max=a[i];
		}
	}
	*p=max;

}
void low(int* a,int s,int *p)
{
      int min=a[0];
       for(int i=0;i<s;i++)
        {
                if(min>a[i])
                {
                   min=a[i];
                }
        }
        *p=min;

}

int main()
{
	int arr[10],h,l;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	int s=sizeof(arr)/sizeof(arr[0]);

	int *p=&h,*pp=&l;
	high(arr,s,p);
	low(arr,s,pp);

	printf("high =%d\nlow=%d",*p,*pp);
}
/*
void high(int a[],int s,int *p){
        int max=a[0];
        for(int i=0;i<s;i++)
        {
                if(max<a[i])
                {
                   max=a[i];
                }
        }
        *p=max;

}
int main()
{
        int arr[10],h,l;
        for(int i=0;i<10;i++){
                scanf("%d",&arr[i]);
        }
        int s=sizeof(arr)/sizeof(arr[0]);
        int *p=&h;
        high(arr,s,p);
        printf("%d",*p);
}
*/
