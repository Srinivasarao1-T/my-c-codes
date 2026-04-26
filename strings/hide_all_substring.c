#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],str2[100];
        gets(str);
        gets(str2);
        char *ptr=NULL;
        ptr=str;
        while(ptr=strstr(ptr,str2))
	{
		memset(ptr,'*',strlen(str2));
		ptr=ptr+strlen(str2);
	}	
	puts(str);
}
