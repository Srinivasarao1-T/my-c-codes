#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt=0;
void rev(char *str)
{
	int l=0,r;
	if(str[strlen(str)-1]=='\n')
	{
		r=strlen(str)-2;
	}
	else{
		r=strlen(str)-1;
	}
	char temp;
	while(l<r)
	{
		temp=str[l];
		str[l]=str[r];
		str[r]=temp;
		r--;
		l++;
	}
}
void my_store(char *file)
{
	FILE *fptr=NULL,*s;
        fptr=fopen(file,"r+");
	s=fptr;
	if(fptr==NULL)
	{
		printf("FILE NOT FOUND\n");
		exit(0);
	}
/*	char str[100],(*new)[100]=NULL;
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
       return new;*/
	char str[100];
	while(fscanf(fptr,"%s",str)!=EOF)
	{
		rev(str);
		fseek(fptr,-strlen(str),SEEK_CUR);
		fputs(str,fptr);
	}
	fclose(fptr);
}
/*void my_revese(char (*line)[100],char *file)
{
    char temp[100];
    FILE *fptr=NULL;
    fptr=fopen(file,"w");
    char *ptr=NULL;
    for(int i=0;i<cnt;i++)
    {
	    ptr=NULL;
	    ptr=line[i];
	    ptr=strtok(ptr,NULL);
	    while(ptr=strtok(NULL," "))
	    {

	    }
    }
}*/
int main(int argc,char *argv[])
{
  if(argc!=2)
  {
	  printf("invalid data");
	  return 0;
  }	  
  my_store(argv[1]);
 }
