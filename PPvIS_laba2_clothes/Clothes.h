#include <iostream>
#include <string>
#include "Cloth.h"

using namespace std;

class Clothes {	
protected:

		bool fashionable;
		Cloth cloth;
		string name, producingCompany, typeOfClothes, model, color, season;
		int size, yearCollection, quality, waterResistance, validTemperature, strength;
public:
		bool getFashinable() { 
			return fashionable; 
		}
		void addToFashionable() { 
			fashionable = true;
		}
		void deleteFromFashionable() {
			fashionable = false; 
		}
		string getName() { 
			return name; 
		}
		string getProducingCompany() {
			return producingCompany; 
		}
		string getModel() {
			return model;
		}
		

		int getSize() { return size; }
		int getYearCollection() { return yearCollection; }
		int getQuality() { return quality; }
		int getWaterResistance() { return waterResistance; }
		int getStrength() { return strength; }
		int getValidTemperature() { return validTemperature; }

		void rename(string newName) { name = newName; }
		void changeProducingCompany(string newCompany) { producingCompany = newCompany; }
		void changeTypeOfClothes(string newType) { typeOfClothes = newType; }
		void changeModel(string newModel) { model = newModel; }
	
		void changeWaterResistance(int newWaterResistance) { waterResistance = newWaterResistance; }
		void changeSize(int newSize) { size = newSize; }
		void changeYearCollection(int newYear) { yearCollection = newYear; }
		void boostQuality(int newQuality) { quality = newQuality; }
		void changeValidTemperature(int newTemperature) { validTemperature = newTemperature; }

		Clothes()
		{
			this->name = "Jacket";
			this->producingCompany = "Terranova";
			this->typeOfClothes = "Dress";
			this->model = "Slim";
			this->size = 44;
			this->yearCollection = 2019;
			this->quality = 60;
			this->waterResistance = 2;
			this->validTemperature = 80;
			this->strength = 10;
			this->fashionable = true;
			this->season = "Summer";
		}

};
