#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
void  printmenu(void)
{
	printf("enter the choice\n");
	printf("I/i:input D/d:delete S/s:sort P/p: printf Q/q:quit\n");
}
char *getstring()
{
      int i=0;
      char *inputword=NULL;
      __fpurge(stdin);
      do
      {
         inputword=realloc(inputword,i+1);
	 inputword[i]=getchar();
      }while(inputword[i++]!='\n');
      inputword[i-1]='\0';
      return inputword;
}
char **input(int *c,char **str)
{
     str=(char**)realloc(str,(*c+1)*sizeof(*str));
    str[*c]=getstring();
    (*c)++;
     return str;

}
void printarr(char **str,int c)
{
	for(int i=0;i<c;i++)
	{
	   printf("%s ",str[i]);
	}
}
void sort(char **str,int c)
{
    char *ch;
    for(int i=c-1;i>0;i--)
    {
	    for(int j=0;j<i;j++)
	    {
		    if(strcmp(str[j],str[j+1])>0)
	            {
		          ch=str[j];
			  str[j]=str[j+1];
			  str[j+1]=ch;
		    }	    
		   
	    }
    }
}
void delete(char **str,int *c,int d)
{
	printf("%d\n",*c);
	char *ch;
//	free(str[d]);
  //     memmove(str+d,str+d+1,((*c)-1-d)*sizeof(*str));
    //   str= realloc(str,--*c*sizeof(*str));
       for(int i=d;i<*c;i++)
	{
		ch=str[i];
		str[i]=str[i+1];
		str[i+1]=ch;
	}
	free(str[*c-1]);
	str=realloc(str,--*c*sizeof(*str));
	if(*c==0) str=NULL;
        
}
int main()
{
	char **str=NULL,ch;
	int c=0,d;
	while(1){
	printmenu();
        __fpurge(stdin);
input:  scanf("%c",&ch);

	switch(ch)
	{
	   case 'I':
	   case 'i':
	         if(c==10)
		 {
		  printf("max limit exceed\n");
		   goto input;
		 }
		  str=input(&c,str);
		  break;
           case 'D':
	   case 'd':
	         printf("index  postion\n");
		 __fpurge(stdin);
		 scanf("%d",&d);
		 d=d-1;
		 //printf("%d",d);
	         delete(str,&c,d);
		 printarr(str,c);
		 break; 
          case 'S':
          case 's':
		 sort(str,c);
		 printarr(str,c);
		 printf("\n");
                 break;
	  case 'P':
	  case 'p':
		 printarr(str,c);
		 break;
          case 'Q':
	  case 'q':
		 return 0;
          default :
		   printf("invalid option\n");
	}
	}
}
