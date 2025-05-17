#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <vector>
class Person{
	private:
		std::string name_;
		int age_;
		double rank_;
		std::vector<std::string> preferences_;
		std::string id_;
		std::string town_;
		std::string province_;
		std::string country_;
		int entry_year_;

	public:
		Person(std::string name, int age, double rank) {
			name_=name;
			age_=age;
			rank_=rank;
		}
		Person(std::string id,
		std::string name="empty",
		std::string town="empty",
		std::string province="empty",
		std::string country="empty",
		int age = 0,
		double rank = 0.00,
		int entry_year = 0);
		
		std::string GetDataStr(){return "Person:\nid: "+id_+"\nname: "+name_+"\ntown: "+town_+"\nprovince: "+province_+"\ncountry: "+country_+"\nage: "+std::to_string(age_)+"\nrank: "+std::to_string(rank_)+"\nentry_year: "+std::to_string(entry_year_);}
		std::vector<std::string> GetPreferences(){return preferences_;}
		void AddPreference(std::string s1){
			preferences_.push_back(s1);
		}
		void AddPreferences(std::string s1, std::string s2, std::string s3);
		void ShowPreferences();
		void ChangePreference(int posicion, std::string nuevo);
		std::string GetId(){return id_;}
		std::string GetName(){return name_;}
		std::string GetTown(){return town_;}
		std::string GetProvince(){return province_;}
		std::string GetCountry(){return country_;}
		int GetAge(){return age_;}
		double GetRank(){return rank_;}
		int GetEntryYear(){return entry_year_;}
		void SetId(std::string nuevo_id) {id_=nuevo_id;}
		void SetName(std::string nuevo_name) {name_=nuevo_name;}
		void SetTown(std::string nuevo_town) {town_=nuevo_town;}
		void SetProvince(std::string nuevo_province) {province_=nuevo_province;}
		void SetCountry(std::string nuevo_country) {country_=nuevo_country;}
		void SetRank(double nuevo_rank) {rank_=nuevo_rank;}
		bool SetAge(int nuevo_edad);
		bool SetEntryYear(int nuevo_anio);
};

#endif
