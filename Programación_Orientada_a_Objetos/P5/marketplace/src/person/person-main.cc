#include "person.h"
#include <iostream>

int main() {
	Person p1("123A", "Jaime", "Córdoba", "Córdoba", "España", 19, 2.29, 2005), p2("456B", "Nicolás", "Pedregalejo", "Málaga", "España", 17, 8.31, 2003);
	std::cout << p1.GetDataStr() << std::endl;
	std::cout << p2.GetDataStr() << std::endl;
}
