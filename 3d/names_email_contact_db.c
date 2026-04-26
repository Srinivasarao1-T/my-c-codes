#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
void printmenu()
{
	printf("I/i :input S/s :sort  D/d:delete P/p: print Q/q:qiuit\n");
}
void print(char (*arr)[3][20],int cnt)
{  
        for(int i=0;i<cnt;i++,printf("\n"))
	{
		for(int j=0;j<3;j++,printf("\n"))
		{
			printf("%s ",arr[i][j]);
		}
	}
}
void input(char (*arr)[3][20],int *cnt)
{
	
	for(int i=0;i<3;i++)
	{
		if(i==0)
		{
			printf("enter the name\n");
                         scanf("%s",arr[(*cnt)][i]);
		}
		if(i==1)
		{
			printf("enter the email\n");
                         scanf("%s",arr[(*cnt)][i]);
		}	
		if(i==2)
		{
			printf("enter the phone number\n");
                         scanf("%s",arr[(*cnt)][i]);
		}
	}
	(*cnt)++;
}
void sort(char (*arr)[3][20],int cnt)
{
	char choice,str[3][20];
	printf("N/n:by name P/p :phone number E/e: email\n");
	__fpurge(stdin);
	scanf("%c",&choice);
	switch(choice)
	{
		case 'N':
		case 'n':
			 for(int i=0;i<cnt-1;i++)
			 {
				 if(strcmp(arr[i][0],arr[i+1][0])>0)
				 {
                                         for(int j=0;j<3;j++){
						 strcpy(str[j],arr[i][j]);
						 strcpy(arr[i][j],arr[i+1][j]);
						 strcpy(arr[i+1][j],str[j]);
					 }			 
				 }
			 }
			 break;
		case 'E':
		case 'e':
			 for(int i=0;i<cnt-1;i++)
			 {
				 if(strcmp(arr[i][1],arr[i+1][1])>0)
				 {
                                         for(int j=0;j<3;j++){
						 strcpy(str[j],arr[i][j]);
						 strcpy(arr[i][j],arr[i+1][j]);
						 strcpy(arr[i+1][j],str[j]);
					 }			 
				 }
			 }
			 break;
		case 'p':
		case 'P':
			 for(int i=0;i<cnt-1;i++)
			 {
				 if(strcmp(arr[i][2],arr[i+1][2])>0)
				 {
                                         for(int j=0;j<3;j++){
						 strcpy(str[j],arr[i][j]);
						 strcpy(arr[i][j],arr[i+1][j]);
						 strcpy(arr[i+1][j],str[j]);
					 }			 
				 }
			 }
			 break;
	        default: printf("invalid option\n");
	}
	
}
void delete(char (*arr)[3][20],int*cnt)
{
     int pos;
     char str[3][20];
     printf("enter the position\n");
     scanf("%d",&pos);
     pos--;
			 for(int i=pos;i<*cnt-1;i++)
			 {
                                         for(int j=0;j<3;j++){
						 strcpy(str[j],arr[i][j]);
						 strcpy(arr[i][j],arr[i+1][j]);
						 strcpy(arr[i+1][j],str[j]);
					 }			 
				 
			 }
    for(int i=0;i<20;i++)
    {
	    arr[*cnt-1][0][i]='\0';
	    arr[*cnt-1][1][i]='\0';
	    arr[*cnt-1][2][i]='\0';
    }
    (*cnt)--;

}
int main()
{
	char arr[10][3][20]={0},ch;
	int cnt=0;
	while(1){
		printmenu();
		__fpurge(stdin);
		scanf("%c",&ch);
		switch(ch)
		{
			case 'I':
			case 'i':
				 input(arr,&cnt);
				 break;
                        case 's':
		        case 'S':
				 sort(arr,cnt);
				 print(arr,cnt);
				 break;
		        case 'D':
		        case 'd':
				 delete(arr,&cnt);
				 print(arr,cnt);
				 break;
			case 'P':
		        case 'p':
				 print(arr,cnt);
				 break;
		        case 'Q':
		        case 'q': 
				 return 0;
		        default:
				 printf("invalid choice\n");
				
		}

	}
}
