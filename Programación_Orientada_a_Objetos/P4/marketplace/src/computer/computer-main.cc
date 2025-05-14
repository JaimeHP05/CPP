#include "computer.h"
#include <iostream>
int main() {
	Computer p1("111Q", ComputerType::Gaming, "PC Ultra", 33, "Windows", "MediaMarkt");
	std::cout << p1.GetDataStr() << std::endl;
}
