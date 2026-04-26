#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void mycpy(char*,char*);
int main(int argc ,char *argv[])
{
	if(argc!=3)
	{
		printf("not possible\n");
		exit(0);
	}
  mycpy(argv[1],argv[2]);
}
void mycpy(char *file1,char *file2)
{
      FILE *src=NULL;
      FILE *des=NULL;
      char *loc=NULL;
      src=fopen(file1,"r");
      if(src==NULL)
      {
	      printf("file was not found\n");
	      exit(0);
      }
     des=fopen(file2,"w");
     char str[100];
 //    loc=strdup(str);
     for(;fgets(str,100,src);)
     {
         printf("%s",str);
	 fputs(str,des);
	 
     }
     fclose(src);
     fclose(des);
}
