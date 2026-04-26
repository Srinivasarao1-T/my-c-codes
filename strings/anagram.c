#include<stdio.h>
#include<string.h>
int ang(char *str,char *str1)
{
        int s[200]={0};
	int s1[200]={0};
        for(int i=0;str[i]!=0;i++){
		s[str[i]]++;
	}
        for(int i=0;str[i]!=0;i++){
		s1[str1[i]]++;
	}
	for(int i=0;i<200;i++){
		if(s[i]!=s1[i]){
			return 0;
		}
	}
	return 1;
	
}
int main(){
    char  str[100],str2[100];
   // fgets(str,20,stdin);
    //fgets(str2,20,stdin);
    gets(str);
    gets(str2);
    if(str[strlen(str)-1]=='\n')
    {
	    str[strlen(str)-1]='\0';
    }
    if(str[strlen(str2)-1]=='\n')
    {
	    str[strlen(str2)-1]='\0';
    }
    int ss=strlen(str);
    int sss=strlen(str2);
    printf(" %d %d\n",ss,sss);
    if(ss==sss)
    {
	    if(ang(str,str2))
	    {
			      puts("anagram");
	    }
	    else{
		    puts("not anagram");
	    }
    }
    else
    {
	   puts("not anagram");
    }
}
