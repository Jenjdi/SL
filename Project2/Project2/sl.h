#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Personlist;
typedef Person Datatype;
typedef struct Seqlist {
	Datatype* arr;
	int size;
	int capacity;
}SL;
SL* sl;
void SLinit(SL* ps);
void SLexpand(SL* ps);
void SLprint(SL* ps);
void SLpushfront(SL* ps, Datatype num);
void SLpushback(SL* ps, Datatype num);
void SLdeletefront(SL* ps);
void SLdeleteback(SL* ps);
void SLinsert(SL* ps, int pos, Datatype num);
void SLdestory(SL* ps);
