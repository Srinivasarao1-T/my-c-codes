#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void my_substring(char *file,char *sub)
{
	FILE *fptr=NULL;
        fptr=fopen(file,"r");
	if(fptr==NULL)
	{
		printf("FILE NOT FOUND\n");
		exit(0);
	}
	char str[100],*ptr=NULL;

        while((fgets(str,100,fptr)))
	{
	 if(strstr(str,sub))
	 {
		 printf("%s",str);
	 }
	}
       fclose(fptr);	
	
}
int main(int argc,char *argv[])
{
  if(argc!=3)
  {
	  printf("invalid data");
  }	  
  my_substring(argv[1],argv[2]);
}
