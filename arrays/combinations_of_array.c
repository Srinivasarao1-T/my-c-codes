#include<stdio.h>
int fact(int a)
{
	int aa=1;
	for(int i=a;i>=1;i--)
	{
		aa*=i;
	 }
	return aa;

}
int main()
{
        int a;
        scanf("%d",&a);
        printf("enter the values");
        int arr[a];
        for(int i=0;i<a;i++){

        scanf("%d",&arr[i]);
        }
        int d=0;
        for(int i=0;i<a;i++){
                d=0;

             for(int j=i+1;j<a;j++){

                     if(arr[i]==arr[j])
                     {
                        for(int k=j;k<a;k++)
                        {
                                arr[k]=arr[k+1];
                        }
                        a--;
                     }
             }
        }
	int res=fact(a);
                printf("%d ",res);
}
