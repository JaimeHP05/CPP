#include "client.h"
#include <iostream>

int main() {
	Client client("123", "John Doe", "New York", "NY", "USA", 30, 4.5, 2020, 1);
	std::cout << "Client Name: " << client.GetName() << std::endl;
	std::cout << "Client Premium Level: " << client.GetPremium() << std::endl;
	return 0;
}
