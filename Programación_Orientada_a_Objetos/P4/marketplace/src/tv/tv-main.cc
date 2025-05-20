#include "tv.h"
#include <iostream>
int main() {
	Tv p1("222B", "LG TV", 33, "Atlus", "Junes", 77);
	std::cout << p1.GetDataStr() << std::endl;
}
