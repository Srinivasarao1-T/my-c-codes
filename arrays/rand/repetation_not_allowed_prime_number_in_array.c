#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int arr[10];
        srand(getpid());
	for(int i=0;i<10;i++)
	{
              int temp=rand()%10;
	      int c=0;
	      for(int j=i-1;j>=0;j--)
	      {
		      if(arr[j]!=temp)
		      {
			      c++;
		      }
	      }
	      if(c==i)
	      {
		      arr[i]=temp;
		     
	      }
	      else{
		      i--;
	      }
	}
	for(int i=0;i<10;i++)
	{
                int c=0;
		for(int j=2;j<arr[i];j++)
			{
			     if(arr[i]%j==0)
			     {
				     c++;
			     }  
			}
		if(c==0)
		{
			printf("%d ",arr[i]);
		}
	}
        printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}
