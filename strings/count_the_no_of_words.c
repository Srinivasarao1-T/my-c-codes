#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int c=0;
        char *ptr=NULL;
        ptr=str;
        ptr=strtok(ptr," ");
//      puts(str);
        while(ptr!=NULL)
        {
                //puts(ptr);
		c++;
                ptr=strtok(NULL," ");
        }
	printf("no of words are = %d",c);
}

