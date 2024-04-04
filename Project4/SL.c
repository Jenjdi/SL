#include"SL.h"
SL* buy(datatype data) {
	SL* newnode = (SL*)malloc(sizeof(SL));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
void SLinit(SL** phead) {
	*phead = (SL*)malloc(sizeof(SL));
	if (*phead == NULL) {
		perror("malloc");
		return;
	}
	(*phead)->next = NULL;
	return phead;
}
void SLpushfront(SL** phead,datatype data) {
	SL* newnode = buy(data);
	newnode->next = (*phead);
	(*phead) = newnode;
}
void SLpushback(SL** phead, datatype data) {
	SL* newnode = buy(data);
	SL* pcur = *phead;
	if (*phead == NULL) {
		*phead = newnode;
		return;
	}
	while (pcur->next!=NULL) {
		pcur = pcur->next;
	}
	pcur->next = newnode;
}
void SLprint(SL* phead) {
	
	if (phead == NULL) {
		printf("\n");
		return;
	}
	printf("%d", phead->data);
	SLprint(phead->next);
}
SL* SLfind(SL** phead, datatype num) {
	SL* pcur = *phead;
	while (pcur->next != NULL) {
		if (pcur->data == num) {
			return pcur;
		}
		return;
	}
}
void SLinsertback(SL** phead,datatype data,SL* find) {
	SL* newnode = buy(data);
	SL* pcur = *phead;
	while (pcur->next != find) {
		pcur = pcur->next;
	}
	pcur = pcur->next;
	pcur->next = newnode;
	newnode->next = find->next;
}
