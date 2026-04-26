//i/p:  121 o/p :palindrome
//i/p :123 o/p:not
// note:121 reverse 121 are equal 123 reverse 321 notequal
#include<stdio.h>
int main()
	{
		int num,reverse=0,digit;
		scanf("%d",&num);
		int temp=num;
		while(num)
		{
			digit=num%10;
			reverse=(reverse*10)+digit;
			num=num/10;
		}
		if(reverse==temp)
		{
			printf("palindrome");
		}
		else
		{
			printf("not");
		}

	}

