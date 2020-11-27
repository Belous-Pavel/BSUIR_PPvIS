#include <iostream>
#include <string>
#include <set>
#include "Thread.h"

class Cloth 
{
protected:

		set <Thread> thread;
		string typeOfCloth;
		int thicknessOfCloth, waterResistance;
public:
		
		string getTypeOfCloth() { return typeOfCloth; }
		int getThicknessOfCloth() { return thicknessOfCloth; }
		int getWaterResistance() { return waterResistance; }
		int getThicknes() { return thicknessOfCloth; }
	
		void changeTypeOfCloth(string newType) { typeOfCloth = newType; }
		void changeThicknessOfCloth(int newThickness) { thicknessOfCloth = newThickness; }
		void changeWaterResistance(int newWaterResistance) {  waterResistance = newWaterResistance; }
		void changeThicknes(int newThickness) {  thicknessOfCloth = newThickness; }


		Cloth()
		{
			this->typeOfCloth = "Jeans";
			this->thicknessOfCloth = 5;
			this->waterResistance = 10;
		}
};