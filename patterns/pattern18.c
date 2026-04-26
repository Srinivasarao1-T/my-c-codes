//555555555
//544444445
//543333345
//543222345
//543212345
//543222345
//543333345
//544444445
//555555555 
#include<stdio.h>
int main()
{
        int a;
        scanf("%d",&a);
        for(int i=a;i>1;i--)
        {
          for(int j=a;j>=1;j--)
          {
                 /* if(i==||a==(i+j)-1)
                  {
                          printf("*");
                  }
                  else{
                          printf(" ");
                  }*/
		  if(j>i)
		  printf("%d",j);
		  else{
			  printf("%d",i);
		  }


          }
	  for(int j=2;j<=a;j++)
	  {
		  if(j>i)
			  printf("%d",j);
	           else
			   printf("%d",i);
	  }

          printf("\n");
        
	}
	for(int i=1;i<=a;i++)
	{
	      for(int j=a;j>=1;j--)
          {
                 /* if(i==||a==(i+j)-1)
                  {
                          printf("*");
                  }
                  else{
                          printf(" ");
                  }*/
                  if(j>i)
                  printf("%d",j);
                  else{
                          printf("%d",i);
                  }


          }
          for(int j=2;j<=a;j++)
          {
                  if(j>i)                                                                                                                         printf("%d",j);
                   else
                           printf("%d",i);
          }

          printf("\n");
	}

}

