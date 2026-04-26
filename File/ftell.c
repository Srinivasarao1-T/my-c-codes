#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char str[100];
	FILE *ptr=NULL;
	if(argc!=2)
			{
			    printf("./a.out filename");	
			    exit(0);
			}
	
	ptr=fopen(argv[1],"r");
//	FILE *c=ptr;
//	printf("%p\n",c);
	//printf("%p\n",ptr);

	if(ptr==NULL){
		printf("fileempty");
	}
	//fseek(ptr,0,2);
	//int size=ftell(ptr);
	fread(str,100,1,ptr);
	puts(str);
	//printf("%d \n",size);
	//int f=ptr-c;
//	printf("%p\n",c-ptr);
	//printf("%p\n",ptr);
//fseek(ptr,-1,1);
   
//	printf("%d",f)
     printf("%d",strlen(str));

}

