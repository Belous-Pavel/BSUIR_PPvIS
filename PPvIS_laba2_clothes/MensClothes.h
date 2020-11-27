#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace Men {
	class MensClothes : public virtual Clothes
	{
	protected:
		int pollutionLevel, amountOfWorn;
	public:
		
		int getPolutinLevel() { return pollutionLevel; }

		void wash() { pollutionLevel = 0; }

		int getpollutionLevel() { return pollutionLevel; }

		MensClothes()
		{
			this->pollutionLevel = 0;
			this->amountOfWorn = 0;
		}
	};
}
