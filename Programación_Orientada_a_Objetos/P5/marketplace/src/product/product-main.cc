#include "product.h"
#include <iostream>
int main() {
	Product p1("333A", "Pan", 9.28, "La panadera", "Yo");
	std::cout << p1.GetDataStr() << std::endl;
}
