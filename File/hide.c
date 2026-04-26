#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void my_reverse(char *file,char *sub)
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
/*	for(int i=0;i<strlen(str)-1;i++)
	{
		if(str[i]==sub[0])
		{
			int cnt=1;
			for(int j=1;j=strlen(sub);j++)
			{
                           if(str[++i]==sub[j])
			   {
				   cnt++;
			   }
			   else{
			   break;
			   }

			}
			if(cnt==strlen(sub))
			{
				memset(str+i-strlen(sub),'*',strlen(sub));
			}
		}
	}*/
	ptr=str;
        while(ptr=strstr(ptr,sub))
	{
		memset(ptr,'*',strlen(sub));
	         ptr=ptr+strlen(sub);	
	}
        fseek(fptr,-strlen(str),SEEK_CUR); 
	fputs(str,fptr);
	}
       fclose(fptr);	
	
}
int main(int argc,char *argv[])
{
  if(argc!=3)
  {
	  printf("invalid data");
  }	  
  my_reverse(argv[1],argv[2]);
}
