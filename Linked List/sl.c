#include"sl.h"

SL* getnew(datatype data) {
	SL* newnode = (SL*)malloc(sizeof(SL));
	if (newnode == NULL)
	{
		perror("mallco fail");
	}
	
	newnode->data = data;
	newnode->next = NULL;

	return newnode;
}

void Destory(SL** node) {
	if ((*node)->next) {
		free(*node);
		*node = NULL;
		return;
	}
	SL* pos = *node;
	
	while (pos) {
		pos = NULL;
		free(pos);
		
		(*node) = (*node)->next;
		pos = *node;
	}
	
}
void Pushfront(SL** node, datatype data) {
	assert(node);
	SL* newnode = getnew(data);
	newnode->next = *node;
	*node = newnode;

}
void Pushback(SL** node, datatype data) {
	if (*node == NULL) {
		*node = getnew(data);
		return;
	}
	SL* pcur = *node;
	SL* newnode = getnew(data);
	while (pcur->next) {
		pcur = pcur->next;
	}
	pcur->next = newnode;

}
SL* Find(SL** node, datatype data) {
	assert(node);
	SL* pcur = *node;
	while (pcur) {
		if (pcur->data == data) {
			return pcur;
		}
		pcur = pcur->next;
	}
	return NULL;
}
void Print(SL** node) {
	
	SL* pcur = *node;
	while (pcur) {
		printf("%d->", pcur->data);
		pcur = pcur->next;
	}
	printf("NULL\n");
}
void DeleteFront(SL** node) {
	assert(*node);
	assert(node);
	if ((*node)->next == NULL) {
		Destory(node);
		return;
	}
	SL* pcur = *node;
	*node = (*node)->next;
	free(pcur);
	pcur=NULL;
}
void DeleteBack(SL** node) {
	assert(*node);
	assert(node);
	SL* pcur = *node;
	SL* prev = pcur;
	while (pcur->next != NULL) {
		prev = pcur;
		pcur = pcur->next;
	}
	free(pcur);
	prev->next = NULL;
}
void insert(SL** node, SL* pos, datatype data) {
	assert(node);
	assert(*node);
	assert(pos);
	
	SL* newnode = getnew(data);
	if (*node == pos) {
		Pushfront(node, data);
		return;
	}
	SL* pcur = *node;
	while (pcur->next != pos) {
		pcur = pcur->next;
	}
	pcur->next = newnode;
	newnode->next = pos;

}