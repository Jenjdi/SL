#include"heap.h"
void Swap(datatype* p1, datatype* p2) {
	datatype tmp = p1;
	*p1 = *p2;
	*p2 = tmp;
}
void HeapInit(heap* node) {
	assert(node);
	node->a = NULL;
	node->capacity = 0;
	node->size = 0;
}
void HeapAdjustUp(datatype* a, int child) {
	int parent=(child - 1) / 2;
	while (child>0) {
		if (a[parent] > a[child]) {
			Swap(&a[parent], &a[child]);
			child = parent;
			parent = (parent - 1) / 2;
		}
		else {
			break;
		}
	}
}
void HeadAdjustDown(datatype* a,int size,int parent) {
	int child = parent * 2 + 1;
	while (child < size) {

		if (child < size && a[child] > a[child + 1]) {
			child++;
		}
		if (a[child] < a[parent]) {
			Swap(&a[child], &a[parent]);
			parent = child;
			child = child * 2 + 1;
		}
		else {
			break;
		}
	}
}
void HeapPush(heap* node,datatype data) {
	assert(node);
	if (node->size == node->capacity) {
		int newcapacity = node->capacity == 0 ? 4 : 2 * sizeof(node->capacity);
		datatype tmp = (datatype)realloc(node->a, newcapacity*sizeof(datatype));
		if (tmp == NULL) {
			perror("realloc failed");
			exit(-1);
		}
		node->a = tmp;
		node->capacity = newcapacity;
	}
	node->a[node->size] = data;
	node->size++;
	HeapAdjustUp(node->a, node->size - 1);
}
void HeapPop(heap* node) {
	assert(node);
	assert(node->size > 0);
	Swap(node->a[0], node->a[node->size - 1]);
	node->size--;
	HeadAdjustDown(node->a, node->size,0);
}
void HeapDestory(heap* node) {
	assert(node);
	free(node->a);
	node->a = NULL;
	node->size = 0;
	node->capacity = 0;
}
datatype HeapTop(heap* node) {
	assert(node);
	assert(node->size);
	return node->a[0];
}
