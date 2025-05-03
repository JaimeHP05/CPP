#include "person.h"
#include <iostream>

namespace ns1{
	int a;
	int b;
}
namespace ns2{
	float a;
	float c;
}

int main() {
	int a=55;
	ns1::a=0;
	ns2::a=2.3;
	std::cout<< "ns1::a= " << ns1::a << "\n";
	std::cout<< "ns2::a= " << ns2::a << "\n";
	std::cout<< "a= " << a << "\n";
	Person p1("Juan", 32, 4.568), p2("Ana", 41, 7.371);
	std::cout << p1.GetName() << "\n";
	std::cout << p1.GetAge() << std::endl;
	std::cout << p1.GetRank() << std::endl;
	std::cout << p2.GetName() << "\n";
	std::cout << p2.GetAge() << std::endl;
	std::cout << p2.GetRank() << std::endl;
}
