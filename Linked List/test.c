#include"sl.h"
void test1(void)
{
	SL* sl = NULL;
	Pushfront(&sl,1);
	Pushfront(&sl,2);
	Pushfront(&sl,3);
	Pushfront(&sl,4);
	Pushback(&sl, 5);
	insert(&sl, Find(&sl, 3), 5);
	DeleteBack(&sl);
	Print(&sl);
}
int main()
{
	test1();
	
	return 0;
}