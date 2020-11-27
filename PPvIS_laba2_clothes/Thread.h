#include <iostream>
#include <string>

using namespace std;

class Thread
{
protected:
	string producingCountry, color, material;
public:
	void changeProviderCountry(string newCountry) { producingCountry = newCountry; }
	void paintMaterial(string newColor) { color = newColor; }
	void changeNameOfMaterial(string newName) { material = newName; }
	string getProrucingCountry() { return producingCountry; }
	string getNameOfMaterials() { return material; }
	string getColor() { return color; }

	Thread()
	{
		this->producingCountry = "Belarus";
		this->material = "Cotton";
		this->color = "White";
	}
	
};

