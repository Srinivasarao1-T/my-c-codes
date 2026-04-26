#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
void *my_store(char *file)
{
	FILE *fptr=NULL,*s;
        fptr=fopen(file,"r");
	s=fptr;
	if(fptr==NULL)
	{
		printf("FILE NOT FOUND\n");
		exit(0);
	}
	char str[100],(*new)[100]=NULL;
      while(fgets(str,100,fptr))
       {
	 new=realloc(new,(cnt+1)*sizeof(*new));
	 strcpy(new[cnt],str);
          cnt++;
       }
        fseek(fptr,-strlen(str),SEEK_CUR); 
	fputs(str,fptr);
	printf("%d",cnt);
       fclose(fptr);	
   return new;
	
}
void my_del(char (*line)[100],char *file,char *var1,char *var2)
{
	char temp[100];
        printf("%d ",cnt);
        FILE *fptr=NULL;
	fptr=fopen(file,"w");
        int str=atoi(var1)-1;
        int end=atoi(var2)-1;
        memmove(line+str,line+end+1,(cnt-end)*sizeof(*line));
 //       memmove(line+str,line+end+1,(cnt-end-1)*sizeof(*line));
//	free(line[--cnt]);
        cnt-=(end-str+1);
	printf("%d",cnt);
	line=realloc(line,cnt*sizeof(*line));
	for(int i=0;i<cnt;i++)
	{
		fputs(line[i],fptr);
	}
	
	fclose(fptr);
}
int main(int argc,char *argv[])
{
  if(argc!=4)
  {
	  printf("invalid data");
	  return 0;
  }
  
  char (*line)[100]=NULL;
  line=my_store(argv[1]);
  printf("%d ",cnt);
  my_del(line,argv[1],argv[2],argv[3]);

  free(line);
 }
