#include<stdio.h>
#include<string.h>
void revv(char *str)
{
	int l=0,r=strlen(str)-1;
	while(l<r)
	{
		int t=str[l];
		str[l]=str[r];
		str[r]=t;
		l++;
		r--;
	}
}
int main()
{
        char str[100],str2[100];
        gets(str);
        gets(str2);
        char *ptr=NULL;
        ptr=str;
	char rev[100];
	strcpy(rev,str2);
	revv(rev);
        int flag=0,flag2=0;
        while(ptr=strstr(ptr,str2))
        {
		if(flag==0){
                memset(ptr,'*',strlen(str2));
		flag=1;
		}
		else if(flag2==0)
		{
			memmove(ptr,rev,strlen(rev));
			flag2=1;
		}
		else
		{
			memmove(ptr,ptr+strlen(str2),strlen(ptr+strlen(str2))+1);
			flag=0;
			flag2=0;
			ptr=ptr-strlen(str2);
			continue;
		}
                ptr=ptr+strlen(str2);
        }
        puts(str);
}

