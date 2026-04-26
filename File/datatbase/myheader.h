#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#pragma pack(1)
typedef struct
{
	int roll;
	char name[20];
	float marks;
}STU;
void *add (STU*);
void print (STU*);
void save (STU*,char*);
void *sync(char*);
