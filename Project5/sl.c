#include"sl.h"
void SLinit(SL* phead) {
	phead->capcity = 0;
	phead->top = -1;
	phead->data = NULL;
}
