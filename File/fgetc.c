#include<stdio.h>
#include<stdlib.h>
int main()
{
      FILE *src=NULL;
      FILE *des=NULL;
      char ch;
      src=fopen("test.txt","r");
      if(src==NULL)
      {
	      printf("file was not found\n");
	      exit(0);
      }
     des=fopen("cpy.txt","w");

     for(;(ch=fgetc(src))!=EOF;)
     {
	  
         printf("%c",ch);
	 fputc(ch,des);
	 
     }
     fclose(src);
     fclose(des);
}

