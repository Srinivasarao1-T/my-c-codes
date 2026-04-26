#include "myheader.h"
extern int cnt;
void print(STU *p)
{
//	printf("%d",cnt);
      for(int i=0;i<cnt;i++)
      {
            printf("%d  ",p[i].roll);
            printf("%s ",p[i].name);
            printf("%f\n",p[i].marks);
      }
}

