#include<stdio.h>
struct stu{
union student
{
	float inter;
	float dip;
}data;
int flag;
};
int main()
{
    struct stu var;
    printf("choose the option 1:inter 2:diploma\n");
    char choice ;
    scanf("%c",&choice);
    switch(choice)
    {
	    case '1':
		    printf("enter the inter marks\n");
		    scanf("%f",&var.data.inter);
		    var.flag=1;
		    break;
	    case '2':
		    printf("enter the diploma marks\n");
		    scanf("%f",&var.data.dip);
		    var.flag=2;
		    break;
            default:
		    printf("invalid option\n");
		    break;
                    
    }
    if(var.flag==1)
    {
	    printf("your inter marks are %.3f \n",var.data.inter);
    }
    if(var.flag==2)
	    {
		    printf("your diploma marks is %.3f \n",var.data.dip);
	    }

}
