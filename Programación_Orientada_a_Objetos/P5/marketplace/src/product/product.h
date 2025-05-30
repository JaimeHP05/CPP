#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
#include <vector>

class Product{
	private:
		std::string id_;
		std::string name_;
		float price_;
		std::string maker_;
		std::string seller_;
		std::vector<std::string> preferences_;
	public:
		Product(std::string id_, std::string name_="empty", float price_=0.0, std::string maker_="empty", std::string seller_="empty");
		
		std::string GetDataStr(){return "Computer:\nid: "+id_+"\nname: "+name_+"\nprice: "+std::to_string(price_)+"\nmaker: "+maker_;}
		std::vector<std::string> GetPreferences(){return preferences_;}
		void AddPreferences(std::string s1, std::string s2, std::string s3);
		void ShowPreferences();
		void ChangePreference(int posicion, std::string nuevo);
		
		std::string GetId(){return id_;}
		std::string GetName(){return name_;}
		float GetPrice(){return price_;}
		std::string GetMaker(){return maker_;}
		std::string GetSeller(){return seller_;}
		
		void SetId(std::string nuevo_id) {id_=nuevo_id;}
		void SetName(std::string nuevo_name) {name_=nuevo_name;}
		void SetPrice(float nuevo_price) {price_=nuevo_price;}
		void SetMaker(std::string nuevo_maker) {maker_=nuevo_maker;}
		void SetSeller(std::string nuevo_seller) {seller_=nuevo_seller;}

};
#endif
