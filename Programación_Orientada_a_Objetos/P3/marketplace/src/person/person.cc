#include "person.h"
#include <iostream>
#include <string>
#include <vector>

void Person::AddPreferences(std::string s1, std::string s2, std::string s3){
	preferences_.insert(preferences_.begin(), s1);
	preferences_.insert(preferences_.end(), s3);
	preferences_.insert(preferences_.begin()+(preferences_.size()/2), s2);
}

void Person::ShowPreferences(){
	std::cout << "\nLas preferencias son: " << std::endl;
	for (auto s: preferences_){
		std::cout << s << std::endl;
	}
}

void Person::ChangePreference(int posicion, std::string nuevo){ 
	try {preferences_.at(posicion) = nuevo;}
	catch (std::out_of_range const & exc) {std::cout << exc.what() << "\n";}
}

Person::Person(std::string id, std::string name, std::string town, std::string province, std::string country, int age, double rank, int entry_year) {
	id_ = id;
	name_ = name;
	town_ = town;
	province_ = province;
	country_ = country;
	age_ = age;
	rank_ = rank;
	if(entry_year > 2000) {
		entry_year_ = entry_year;
	}
	else {
		entry_year_ = 0;
	}
}

bool Person::SetAge(int nuevo_edad){
	if(nuevo_edad>0){
		std::cout <<"\nValor de edad renovado." << std::endl;
		age_=nuevo_edad;
		return true;
	}
	else {
		std::cout <<"\nValor de edad inválido. " << std::endl;
		return false;
	}
}

bool Person::SetEntryYear(int nuevo_anio){
	if(nuevo_anio>2000){
		std::cout <<"\nValor de año renovado." << std::endl;
		entry_year_=nuevo_anio;
		return true;
	}
	else {
		std::cout <<"\nValor de año inválido. " << std::endl;
		return false;
	}
}
