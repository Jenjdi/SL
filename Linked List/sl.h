#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int datatype;
typedef struct Node {
	datatype data;
	struct Node* next;
}SL;

SL* getnew(datatype data);
void Print(SL** node);
void Pushfront(SL** node, datatype data);
void Pushback(SL** node, datatype data);
SL* Find(SL** node, datatype data);
void Destory(SL** node);
void DeleteFront(SL** node);
void DeleteBack(SL** node);
void insert(SL** node,SL* pos,datatype data);

