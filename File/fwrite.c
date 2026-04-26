#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct 
{
	int roll;
	char name[20];
	float marks;
}STU;
int main(int argc,char *argv[])
{
    if(argc!=2)
    {
	    printf("error\n");
	    exit(0);
    }
    STU arr[3];
     for(int i=0;i<3;i++)
    {
        printf("enter the rolln:\n");
       scanf("%d",&arr[i].roll);
       printf("enter the name:\n");
       __fpurge(stdin);
       scanf("%[^\n]s",arr[i].name);
       printf("enter the marks:\n");
       scanf("%f",&arr[i].marks);
    }
     for(int i=0;i<3;i++)
    {
	printf("enter the rolln:\n");
       printf("%d\n",arr[i].roll);
       printf("enter the name:\n");
       printf("%s\n",arr[i].name);
       printf("enter the marks:\n");
       printf("%f\n",arr[i].marks);
    }
   FILE *fptr=NULL;
   fptr=fopen(argv[1],"a+");
   for(int i=0;i<3;i++)
   {
	   fprintf(fptr,"%d   %s   %f\n",arr[i].roll,arr[i].name,arr[i].marks);
	   
   }
   fclose(fptr);

}
