#include "myheader.h"
extern int cnt;
void *sync(char *p){    
    FILE *fptr=NULL;
    fptr=fopen(p,"r");
    if(fptr==NULL)
    {
            printf("file not found\n");
            exit(0);
    }
    char var[100];
    STU *ptr=NULL;
    while(fread(var,sizeof(STU),1,fptr))
    {
            cnt++;
    }
    fseek(fptr,0,0);
    if(cnt!=0)
    {
            ptr=realloc(ptr,cnt*sizeof(STU));
            fread(ptr,sizeof(STU),cnt,fptr);
    }
    fclose(fptr);
    return ptr;
}
