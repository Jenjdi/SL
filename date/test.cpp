#include"date.h"
int main() {

	Date d1(2024, 5, 6);
	d1.Print();
	Date d2(2024, 4, 30);
	d2.Print();
	std::cout << d2 - d1 << std::endl;
}