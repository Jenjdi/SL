#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int Datatype;
typedef struct SLTdata {
	Datatype data;
	struct SLTdata* next;
}SLT;
void Pushback(SLT** list,Datatype data);
void SLprint(SLT** phead);
SLT* SLTbuynode(Datatype data);
void SLTinsert(SLT** phead, SLT* pos, Datatype data);
void Pushfront(SLT** phead, Datatype data);
void Pop(SLT** phead, SLT* pos);
SLT* SLTFind(SLT** phead, Datatype data);