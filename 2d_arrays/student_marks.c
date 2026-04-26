#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int call(int *arr)
{
       int res=0;
       for(int i=0;i<5;i++)
       {
          res+=arr[i];
	
       }
       printf("%d ",res);
       return res;
}
int for_highest_fail_sub(int (*arr)[5],int i)
{
	int c=0;
        for(int j=0;j<20;j++)
	{ 
		//if((*(*(arr+j)+i))<=35)
		if(arr[i][j]<=35)
		{
			c++;
		}
	}
	return c;
}
int main()
{
       int arr[20][5],hig=0,res,no;
       srand(getpid());
      for(int i=0;i<20;i++)
      {  
	      for(int j=0;j<5;j++)
	      {
                   arr[i][j]=rand()%101;
	      }
      }
      for(int i=0;i<20;i++)
      {     
	      printf("student no is:%d\n",i+1);
	      for(int j=0;j<5;j++)
	      {
		      printf("%3d ",arr[i][j]);
	      }
	      printf("\n");
      }
      for(int i=0;i<20;i++)
      {
         res=call(*arr+i);
	    if(hig<res)
	    {
                hig =res;
		no=i;
	    } 
      }
      int fail=0;
      printf("\nhighest score :%d student is:%d",hig,no);
      for(int i=0;i<5;i++)
          {
	       int count= for_highest_fail_sub(arr,i);
	       if(count >fail)
	       {
		       fail=count;
	       }
	  }
      printf("\n%d\n",fail);
}
