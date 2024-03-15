#include "sl.h"
int main() {
	SLinit(&sl);
	SLpushback(&sl, 1);
	SLpushback(&sl, 2);
	SLpushback(&sl, 3);
	SLinsert(&sl, 3, 10);
	SLinsert(&sl, 2, 10);
	SLinsert(&sl, 5, 10);
	SLprint(&sl);
}
