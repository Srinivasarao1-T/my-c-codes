#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc ,char *argv[])
{
	if(argc<3)
	{
		printf("not possible\n");
		exit(0);
	}
      FILE *src=NULL;
      src=fopen(argv[1],"r");
      if(src==NULL)
      {
	      printf("file was not found\n");
	      exit(0);
      }
      FILE *des[argc-2];
     char str[100];
     for(int i=0;i<argc-2;i++)
     {
	     des[i]=fopen(argv[i+2],"w");
     }
     for(;fgets(str,100,src);)
     {
         for(int i=0;i<argc-2;i++)
	 {
		 fputs(str,des[i]);
	 }
	 
     }

     fclose(src);
     for(int i=0;i<argc-2;i++)
     {
	     fclose(des[i]);
     }
}
