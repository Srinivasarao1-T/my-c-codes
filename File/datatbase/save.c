#include"myheader.h"
extern int cnt;
void save(STU *p,char *file)
{
	FILE *fptr=NULL;
	fptr=fopen(file,"w");
	if(fptr==NULL)
	{
		printf("file not found\n");
		return;
	}
	fwrite(p,sizeof(STU),cnt,fptr);
        fclose(fptr);
}
