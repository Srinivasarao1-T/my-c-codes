#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        char str[100];
        gets(str);
	char *ptr=str;
	int c=0;
	long int pos1,pos2,i1,i2,len=strlen(str);
	puts("enter the pos");
	scanf("%ld%ld",&pos1,&pos2);
        char str1[100],str2[100];
	ptr=strtok(str," ");
	while(ptr)
	{
		c++;
		if(c==pos1)
		{
	            strcpy(str1,ptr);
		    i1=(ptr-str);
		}
		if(c==pos2)
		{
	            strcpy(str2,ptr);
		    i2=(ptr-str);
		}
		ptr=strtok(NULL," ");
	}
	for(int i=0;i<len;i++)
	{
		if(str[i]=='\0')
		{
			str[i]=32;
		}
	}
	/*memmove(str+i2,str+i2+strlen(str2),strlen(str+i2+strlen(str2))+1);
	puts(str);
	memmove(str+i1,str+i1+strlen(str1),strlen(str+i1+strlen(str1))+1);
	puts(str);
        for(int i=strlen(str);i>i1;i--)
	{
		str[i+strlen(str2)]=str[i];
	}
         strncpy(str+i1,str2,strlen(str2));
	 puts(str);
        for(int i=strlen(str);i>i2;i--)
	{
		str[i+strlen(str1)]=str[i];
	}
         strncpy(str+i2,str1,strlen(str1));*/
	memmove(str+i1+strlen(str2),str+i1+strlen(str1),strlen(str+i1+strlen(str1))+1);
	 puts(str);
	 strncpy(str+i1,str2,strlen(str2));
	 puts(str);
	 memmove(str+i2-(strlen(str1)-strlen(str2))+strlen(str1),str+i2-(strlen(str1)-strlen(str2))+strlen(str2),strlen(str+i2+(strlen(str1)-strlen(str2))+strlen(str2))+1);
	 puts(str);
	 strncpy(str+i2-(strlen(str1)-strlen(str2)),str1,strlen(str1));
	 puts(str);
   
}
