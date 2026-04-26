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
       for(;fgets(str,100,fptr);)
       {
	 new=realloc(new,(cnt+1)*sizeof(*new));
	 strcpy(new[cnt],str);
          cnt++;
       }
        //fseek(fptr,-strlen(str),SEEK_CUR); 
	//fputs(str,fptr);
	printf("%d",cnt);
       fclose(fptr);	
       return new;
	
}
void my_sort(char (*line)[100],char *file)
{
	char temp[100];
	for(int i=cnt-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
                {
			if(strcmp(line[i],line[j])<0)
			{
                                strcpy(temp,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
        FILE *fptr=NULL;
	fptr=fopen(file,"r+");
        for(int i=0;i<cnt;i++)
	{
	       fputs(line[i],fptr);
	}
	fclose(fptr);
}
int main(int argc,char *argv[])
{
  if(argc!=2)
  {
	  printf("invalid data");
	  return 0;
  }	  
  char (*line)[100]=NULL;
  line=my_store(argv[1]);
  my_sort(line,argv[1]);
    free(line);
 }
