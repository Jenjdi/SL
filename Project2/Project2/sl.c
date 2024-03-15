#include"sl.h"
void SLinit(SL* ps) {
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
void SLexpand(SL* ps) {
	if (ps->capacity == ps->size) {
		int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		int* tmp = (int*)realloc(ps->arr, newCapacity * sizeof(int));
		if (tmp == NULL) {
			perror("realloc failed");
			exit(1);
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}
void SLpushback(SL* ps, Datatype num) {
	SLexpand(ps);
	assert(ps);
	ps->arr[ps->size++] = num;
}
void SLprint(SL* ps) {
	for (int i = 0; i < ps->size; i++) {
		printf("%d", ps->arr[i]);
	}
}
void SLpushfront(SL* ps, Datatype num) {
	for (int i = ps->size; i > 0; i--) {
		ps->arr[i] = ps->arr[i-1];
	}
	ps->arr[0] = num;
	ps->size++;
}
void SLdeleteback(SL*ps) {
	assert(ps);
	assert(ps->size);
	ps->size--;
}
void SLdeletefront(SL* ps) {
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size-1; i++) {
		ps->arr[i] = ps->arr[i + 1];
		ps->size--;
	}
}
void SLinsert(SL* ps, int pos, Datatype num) {
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLexpand(ps);
	for (int i = ps->size; i > pos; i--) {
		ps->arr[i] = ps -> arr[i-1];
	}
	ps->arr[pos] = num;
	ps->size++;
}
void SLerase(SL* ps, int pos) {
	assert(ps);
	for (int i = pos; i < ps->size - 1; i++) {
		ps->arr[i] = ps -> arr[i + 1];
	}
}
void SLdestory(SL* ps) {
	assert(ps);
	if (ps->arr) {
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}