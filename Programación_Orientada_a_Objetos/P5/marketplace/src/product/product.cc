#include "product.h"
#include <iostream>
#include <string>
#include <vector>

Product::Product(std::string id, std::string name, float price, std::string maker, std::string seller){
	id_=id;
	name_=name;
	price_=price;
	maker_=maker;
	seller_=seller;
}

void Product::AddPreferences(std::string s1, std::string s2, std::string s3){
	preferences_.insert(preferences_.begin(), s1);
	preferences_.insert(preferences_.end(), s3);
	preferences_.insert(preferences_.begin()+(preferences_.size()/2), s2);
}

void Product::ShowPreferences(){
	std::cout << "\nLas preferencias son: " << std::endl;
	for (auto s: preferences_){
		std::cout << s << std::endl;
	}
}

void Product::ChangePreference(int posicion, std::string nuevo){ 
	try {preferences_.at(posicion) = nuevo;}
	catch (std::out_of_range const & exc) {std::cout << exc.what() << "\n";}
}
