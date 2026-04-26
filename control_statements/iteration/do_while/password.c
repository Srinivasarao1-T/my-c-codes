//wap to implement the password proctection system
//take the i/p from the user to match the password in 5 attempts
#include<stdio.h>
int main()
{
	int i=1,a,flag=0;
	do{
		scanf("%d",&a);
	
		
		if(a==1234){
			flag=1;
			break;
		}
	

		i++;
	}while(i<=5);
		if(flag==1){
			printf("correct password");
		}
		else{
			printf("try after 1 hr");
		}
}
