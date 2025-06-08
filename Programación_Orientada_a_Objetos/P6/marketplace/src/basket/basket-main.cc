#include "basket.h"

void Basket::AddProduct(Product item){
	std::list<Product>::iterator position;
	for(position = product_list_.begin(); position != product_list_.end(); position++) {
		if((*position).GetId() == item.GetId()) {break;}
	}
	if(position == product_list_.end()) {
		product_list_.push_back(item);
		product_quantity_[item.GetId()] = 1;
		}
	else {
		product_quantity_[item.GetId()]++;
	}
	total_ = total_ + item.GetPrice();
}

bool Basket::DeleteProduct(Product item){
	std::list<Product>::iterator position;
	for(position = product_list_.begin(); position != product_list_.end(); position++) {
		if((*position).GetId() == item.GetId()) {break;}
	}
	if(position == product_list_.end()) {
		return false;
		}
	else {
		if((product_quantity_[item.GetId()] = product_quantity_[item.GetId()] - 1) <= 0){
			product_list_.erase(position);
			product_quantity_.erase(item.GetId());
		}
	}
	total_ = total_ - item.GetPrice();
	return true;
}

bool Basket::DeleteProduct(std::string id){
	std::list<Product>::iterator position;
	for(position = product_list_.begin(); position != product_list_.end(); position++) {
		if((*position).GetId() == id) {break;}
	}
	if(position == product_list_.end()) {
		return false;
		}
	else {
		total_ = total_ - (*position).GetPrice();
		if((product_quantity_[id] = product_quantity_[id] - 1) <= 0){
			product_list_.erase(position);
			product_quantity_.erase(id);
		}
	}
	return true;
}

void Basket::DeleteBasket(){ 
	total_ = 0.0;
	product_list_.clear();
	product_quantity_.clear();
}

std::vector<std::string> Basket::GetIds(){
	std::vector<std::string> id_vector;
	if(product_list_.size() == 0) {return id_vector;}
	else {
		std::list<Product>::iterator position;
		for(position = product_list_.begin(); position != product_list_.end(); position++) {
			id_vector.push_back((*position).GetId());
		}
		return id_vector;
	}
}

std::vector<int> Basket::GetQs(){
	std::vector<int> cantidad_vector;
	if(product_list_.size() == 0) {return cantidad_vector;}
	else {
		std::map<std::string, int>::iterator position;
		for(position = product_quantity_.begin(); position != product_quantity_.end(); position++) {
			cantidad_vector.push_back((*position).second);
		}
		return cantidad_vector;
	}
}
