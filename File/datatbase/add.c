#include "myheader.h"
extern int cnt;
void *add(STU *ptr)
{
    
      ptr=realloc(ptr,(cnt+1)*sizeof(STU));
      printf("enter the roll\n");
      scanf("%d",&ptr[cnt].roll);
      printf("enter the name\n");
      scanf("%s",ptr[cnt].name);
      printf("enter the marks\n");
      scanf("%f",&ptr[cnt].marks);
      cnt++;
      return ptr;
}

