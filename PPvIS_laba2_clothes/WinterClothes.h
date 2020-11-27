#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WinterClothes : public virtual Clothes
{
	public:
	
		bool mittens;
	
		string getMittens() { return mittens ? "Tied" : "Untied"; }

		void toTieMittens() { mittens = true; }
		void untielMittens() { mittens = false; }
		
		WinterClothes()
		{
			this->mittens = false;
		}
};