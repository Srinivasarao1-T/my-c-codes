#include<stdio.h>
void Printcom(int arr[],int data[],int start,int end,int index,int k)
{
	if(index==k){
        for(int i=0;i<k;i++){
           printf("%d ",data[i]);
	   printf("\n");
           	return;
               }
	}

	for(int i=start;(i <= end )&& (end-i+1>=k-index);i++)
	{
		data[index]=arr[i];
		Printcom(arr,data,i+1,end,index+1,k);
	}
}
void gencom(int arr[],int n,int k){
	int data[k];
	Printcom(arr,data,0,n-1,0,k);
}
int main()
{
        /*int a;
        scanf("%d",&a);
        printf("enter the values");
        int arr[a];
        for(int i=0;i<a;i++){

        scanf("%d",&arr[i]);
        }
        for(int i=0;i<a;i++){
             for(int j=i+1;j<a;j++){

                     if(arr[i]==arr[j])
                     {
                        for(int k=j;k<a;k++)
                        {
                                arr[k]=arr[k+1];
                        }
                        a--;
			i--;
                     }
             }
        }
	int com;
	printf("enter the number of combination");
	printf("after remove duplicates %d\n",a);
	scanf("%d",&com);
       /*for(int i=0;i<a-com+1;i++)
        {  
        for(int j=i;j<a;j++)
	{
                      for(int k=j;k<j+com;k++)
		      {
                         printf("%d ",arr[k]);
                        }
		      printf("\n");
                }


	}*/
	int arr[5]={1,2,3,4,5};
	int a=sizeof(arr)/sizeof(arr[0]);
	int com=2;

	gencom(arr,a,com);
	return 0;
}
