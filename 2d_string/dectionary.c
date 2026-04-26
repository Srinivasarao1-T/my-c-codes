#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	scanf("%s",str);
	//sort
	for(int i=0;i<strlen(str);i++)
         {
		 for(int j=i+1;j<strlen(str);j++)
		 {
			 if(str[i]>str[j])
			 {
				 char ch=str[j];
				 str[j]=str[i];
				 str[i]=ch;
			 }
		 }
	 }
	char str2[20];
	int pos=0;
input1:	strcpy(str2,str);
	if(pos<strlen(str)-1){
		return 0;
	}
	
}
