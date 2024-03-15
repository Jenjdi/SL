#include"SLT.h"
int main() {
	SLT* sl = NULL;
	
	Pushback(&sl, 1);
	Pushback(&sl, 2);
	Pushback(&sl, 3);
	Pushback(&sl, 4);
	SLT* Find = SLTFind(&sl, 1);
	SLTinsert(&sl, Find, 5);
	SLprint(&sl);
}