#include<stdio.h>
#include<string.h>
int main()
{
   char str[100],str2[100];
    gets(str);
    int c;
    for(int i=0;i<strlen(str)-1;i++)
    {
	    for(int j=i+1;j<strlen(str);j++)
	    {
		    if(str[i]>str[j]){
			    int t=str[i];
			    str[i]=str[j];
			    str[j]=t;
			    
		    }

	    }
	   

    }  
    puts(str);
}






















