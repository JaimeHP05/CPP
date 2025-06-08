#ifndef BASKET_H
#define BASKET_H
#include <map>
#include <list>
#include <string>
#include <vector>
#include "product.h"
class Basket {
	private:
		std::list<Product> product_list_;
		std::map<std::string, int> product_quantity_;
		float total_;
	public:
		Basket() {total_=0.0;}
		void AddProduct(Product item);
		bool DeleteProduct(Product item);
		bool DeleteProduct(std::string id);
		void DeleteBasket();
		int GetSize(){return product_list_.size();}
		float GetTotal(){return total_;}
		std::vector<std::string> GetIds();
		std::vector<int> GetQs();
};
#endif
