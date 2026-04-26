#include"myheader.h"
int cnt;
int main(int argc,char *argv[])
{
    if(argc!=2)
    {
	    printf("exe filename\n");
	    exit(0);
    }
    STU *ptr=NULL;
    ptr=sync(argv[1]);
    while(1)
    {
	    printf("A/a:add P/p:printf S/s:save E/e:exit\n");
	    char choice;
	    __fpurge(stdin);
	    scanf("%c",&choice);
	    switch(choice)
	    {
		    case 'a':
	            case 'A': 
			    ptr=add(ptr);
			      break;
	            case 'P':
	            case 'p':
			      print(ptr);
			      break;
		    case 'S':
		    case 's':
			      save(ptr,argv[1]);
			      break;
	            case 'E':
		    case 'e':
			      exit(0);
		    default :printf("invalid data\n");
	    }
    }

}
