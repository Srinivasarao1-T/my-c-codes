#include <stdlib.h>
#include <stdio.h>
struct a {
  int myNum;
  char myLetter;
};

int main() {
  struct a myStructure [10] ;
  int a,b;
  scanf("%d",&a);
  char c;
  for(int i=0;i<a;i++)
  {
    scanf("%d",&b);
    __fpurge(stdin);
    scanf("%c",&c);
  myStructure[i].myNum = b;
  myStructure[i].myLetter = c ;
  }
  for(int i=0;i<a;i++)
  {
  printf("My number: %d\n", myStructure[i].myNum);
  printf("My letter: %c\n", myStructure[i].myLetter);
  }

  return 0;
}
