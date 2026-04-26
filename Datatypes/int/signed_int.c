int printf(const char*,...);
int scanf(const char*,...);
int main()
{
	signed int a=23,b=-99,c;
	scanf("%d",&c);
	a=a-c;
	b=b+c;
	printf("%d %d",a,b);
	return 0;
}
