#include<stdio.h>
#include<stdlib.h>
int main()
{
      FILE *src=NULL;
      FILE *des=NULL;
      char *loc;
      src=fopen("test.txt","r");
      if(src==NULL)
      {
	      printf("file was not found\n");
	      exit(0);
      }
     des=fopen("cpy.txt","w");

     for(;fgets(loc,100,src);)
     {
	  
         printf("%s",loc);
	 fputs(loc,des);
	 
     }
     fclose(src);
     fclose(des);
}

