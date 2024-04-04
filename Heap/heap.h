#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int datatype;
typedef struct Node {
	datatype* a;
	int size;
	int capacity;
}heap;

void HeapInit(heap* node);
datatype HeapTop(heap* node);
void HeapPush(heap* node, datatype data);
void HeadAdjustDown(datatype* a, int size, int parent);
void HeapAdjustUp(datatype* a, int child);
void Swap(datatype* p1, datatype* p2);
void HeapPop(heap* node);
void HeapDestory(heap* node);
