#ifndef TV_H
#define TV_H
#include "product.h"

class Tv: public Product{
	private:
		float inch_;
	public:
		Tv(std::string id_, std::string name_="empty", float price_=0.0, std::string maker_="empty", std::string seller_="empty", float inch_=0.0);
		float GetInch(){return inch_;}
		bool SetInch(float nuevo_inch);
};
#endif
