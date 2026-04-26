#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int a,char **argv)
{
	char s1[10];
	char s2[10];
	char s3[20];
	if(a>=3){
              strcpy(s1,argv[1]);
	      strcpy(s2,argv[2]);
	}
	else
	{
		scanf("%s",s1);
		scanf("%s",s2);
	}
	sprintf(s3,"%d",atoi(s1)+atoi(s2));
	printf("%s",s3);
}
