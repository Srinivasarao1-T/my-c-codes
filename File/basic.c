#include<stdio.h>

int main()
{
	FILE *fptr=NULL;
//	fptr=fopen("/home/v24he8t3/Desktop/My_c_codes/File/test.txt","r");
	fptr=fopen("test.txt","r");
	if(fptr!=NULL)
	{
		printf("file avalible\n");
		return 0;

	}
	printf("file not found\n");
}
