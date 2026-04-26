#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  	if(argc!=3)
	{
		printf("exe filename substring");
		exit(0);
	}
	FILE *fptr=NULL;
	fptr=fopen(argv[1],"r+");
	if(fptr==NULL) {printf("file not found\n"); exit(0);}
	char str[100];      
        while(fgets(str,100,fptr))
        {
		char *ptr=NULL;
		ptr=str;
		while(ptr=strstr(ptr,argv[2]))
		{
			memset(ptr,'*',strlen(argv[2]));
			ptr=ptr+strlen(argv[2]);
		}
		fseek(fptr,-strlen(str),SEEK_CUR);
		fputs(str,fptr);

        }
}

