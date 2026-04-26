#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rev(char *sub)
{
	char ch;
	short int l=0,r=strlen(sub)-1;
	while(l<r)
	{ 
	    ch=sub[l];
            sub[l]=sub[r];
            sub[r]=ch;
            l++;
            r--;	    
	}
}
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
	short int cnt=0;
	char sub[20];
	strcpy(sub,argv[2]);
	rev(sub);
	puts(sub);
        while(fgets(str,100,fptr))
        {
		char *ptr=NULL;
		ptr=str;
		while(ptr=strstr(ptr,argv[2]))
		{       if(cnt==0){
			memset(ptr,'*',strlen(argv[2]));
			cnt=1;
		        }
		        else{
                           memmove(ptr,sub,strlen(sub));
			   cnt=0;
			}
			ptr=ptr+strlen(sub);
		}
		fseek(fptr,-strlen(str),SEEK_CUR);
		fputs(str,fptr);

        }
}

