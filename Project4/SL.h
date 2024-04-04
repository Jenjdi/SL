#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;
typedef struct Node {
	datatype data;
	struct Node* next;
}SL;
void SLinit(SL** phead);
void SLprint(SL** phead);
void SLpushback(SL** phead, datatype data);
void SLpushfront(SL** phead, datatype data);
SL* buy(datatype data);