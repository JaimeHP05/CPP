#ifndef COMPUTER_H
#define COMPUTER_H
#include "product.h"

enum class ComputerType {
	Desktop,
	Laptop,
	Server,
	Tablet,
	Gaming
};
class Computer: public Product{
	private:
		ComputerType type_;
	public:
		Computer(std::string id_, ComputerType type_, std::string name_="empty", float price_=0.0, std::string maker_="empty", std::string seller_="empty");
		ComputerType GetType(){return type_;}
		void SetType(ComputerType nuevo_type) {
			type_=nuevo_type;
		}
};
#endif
