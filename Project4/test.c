#include"SL.h"
int main() {
	SL* p = NULL;

	SLpushback(&p, 1);
	SLpushback(&p, 2);
	SLpushback(&p, 4);
	SLpushback(&p, 5);
	SLpushback(&p, 6);
	SLprint(p);
}