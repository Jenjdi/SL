#include"SLT.h"	
void Pushback(SLT** phead, Datatype data) {
	assert(phead);
	SLT* newnode = SLTbuynode(data);
	SLT* pcur = *phead;
	if (*phead == NULL) {
		*phead = newnode;
		return;
	}
	while (pcur->next) {
		pcur = pcur->next;
	}
	pcur->next = newnode;
}
void Pushfront(SLT** phead,Datatype data) {
	assert(phead);
	SLT* newnode = SLTbuynode(data);
	newnode->next = *phead;
	*phead = newnode;
}
void SLprint(SLT **phead) {
	SLT* pcur = *phead;
	while (pcur) {
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
		printf("NULL\n");
}
SLT* SLTbuynode(Datatype data) {
	SLT* newnode = (SLT*)malloc(sizeof(SLT));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
void SLTinsert(SLT** phead,SLT* pos, Datatype data) {
	assert(phead);
	assert(pos);
	assert(*phead);
	SLT* newnode = SLTbuynode(data);
	if (pos == *phead) {
		Pushfront(phead, data);
		return;
	}
	SLT* pcur = *phead;
	while (pcur->next != pos) {
		pcur = pcur->next;
	}
	pcur->next = newnode;
	newnode->next = pos;
}
SLT* SLTFind(SLT** phead,Datatype data) {
	assert(phead);
	SLT* pcur = *phead;
	while (pcur) {
		if (pcur->data == data) {
			return pcur ;
		}
		pcur = pcur->next;
	}
	return NULL;
}
void Erasefront(SLT** phead) {
	SLT* pcur = *phead;
	pcur = pcur->next;
	free(*phead);
	*phead = pcur;
}
void Pop(SLT** phead,SLT* pos) {
	assert(phead);
	assert(pos);
	assert(*phead);
	if (*phead == pos) {
		Erasefront(*phead);
		return;
	}
	SLT* pcur = *phead;
	while (pcur->next != pos) {
		pcur = pcur->next;
	}
	pcur->next = pos->next;
	free(pos);
	pos = NULL;
}