#include<stdio.h>
int main(){
    char str[10];
    gets(str);
   int s=strlen(str);
    for(int i=0;i<s;i++)

    {
	    if(i==0||i==s-1)
	    {
		    if(str[i]>64&&str[i]<91)
		    {
			    str[i]=str[i];
		    }
		    else
		    {
			    str[i]=str[i]-32;
		    }
		    printf("%c",str[i]);
		    continue;

	    }
	    if(str[i+1]==32||str[i-1]==32)
	    
	    {
		   // continue;
		   str[i]=str[i]-32;
		   printf("%c",str[i]);
		   continue;
		   
	    }
	    if(str[i]>64&&str[i]<91)
	    {
		    str[i]=str[i]+32;
	    }
	    printf("%c",str[i]);

    }
   // puts(str);
}
