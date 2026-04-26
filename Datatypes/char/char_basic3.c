//#include<stdlib.h>
int getchar(void);
int putchar(int);
void exit(int);
int printf(const char*,...);
void mainf()
{
	char var=50;
	//var=getchar();
        var*=2;
	printf("var=%d....%c",var,var);
	var=var+2;
	printf("var=%d...%c",var,var);
	var*=2;
	printf("var=%d...%c",var,var);
	exit(0);
}
