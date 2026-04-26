#include<stdio.h>
#include<string.h>
int main()

{
	
	char s1[200],s2[100],s3[100];
	gets(s1);
	gets(s2);
	int k,i,a;
	scanf("%d",&a);
	k=strlen(s1);
	int h=strlen(s1)+strlen(s2);
	for(i=0;i<a;i++){
		s3[i]=s1[i];
	}
	
	for(int j=0;j<strlen(s2);j++){
		s3[i++]=s2[j];
		
	}
	int j=a;
	for( int k=strlen(s2)+a-1;k<h;k++){
		s3[i++]=s1[j++];
		
	}
	s3[++j]='\0';
	puts(s3);
}

