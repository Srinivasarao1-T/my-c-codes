#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char *str)
{
      int l=0,r=strlen(str)-2;
      char temp;
      while(l<r)
      {
           temp=str[l];
	   str[l]=str[r];
	   str[r]=temp;
	   l++;
	   r--;
      }
}
void my_reverse(char *file)
{
	FILE *fptr=NULL;
        fptr=fopen(file,"r+");
	if(fptr==NULL)
	{
		printf("FILE NOT FOUND\n");
		exit(0);
	}
	char str[100],*ptr=NULL;

        while((fgets(str,100,fptr)))
	{
	rev(str);
	printf("%s",str);
        fseek(fptr,-strlen(str),SEEK_CUR); 
	fputs(str,fptr);
	}
       fclose(fptr);	
	
}
int main(int argc,char *argv[])
{
  if(argc!=2)
  {
	  printf("invalid data");
  }	  
  my_reverse(argv[1]);
}
