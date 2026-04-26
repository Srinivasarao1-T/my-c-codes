#include<stdio.h>
#include<stdlib.h>
void sprial(int (*arr)[3])
{
	int top=0,bottom=2,end=2,f=0;
	while(top<=bottom)
	{
		for(int i=top;i<=end;i++){
		     printf("%d ",*(*(arr+top)+i));
         	}
		top++;
         	for(int i=top;i<=end;i++)
		{
                    printf("%d ",*(*(arr+i)+end));
		}
		end--;
		for(int i=end;i>=f;i--)
		{
			printf("%d ",*(*(arr+bottom)+i));
         	}
		bottom--;
		for(int i=bottom;i>f;i--)
		{
			printf("%d ",*(*(arr+i)+f));
		}
		f++;
	}
}
int main()
{
     int  arr[3][3];
     for(int i=0;i<3;i++)
	    {
		    for(int j=0;j<3;j++)
		    {
			    scanf("%d",&arr[i][j]);
		    }
	    }
     for(int i=0;i<3;i++)
	    {
		    for(int j=0;j<3;j++)
		    {
			    printf("%d",arr[i][j]);
		    }
		    printf("\n");
	    }
     sprial(arr);
}
