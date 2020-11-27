#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DemiSeasonClothes : public SummerClothes, public WinterClothes
{
	protected:
		bool hood;
	public:

		bool getInfHood() { return hood; }

		void putOnHood() { hood = true; }
		void takeOffHood() { hood = false; }

		void rollUpSleeve() { underSleeve += 1; }
		void rollDownSleeve()
		{
			if (underSleeve > 0) underSleeve -= 1;
		}

		DemiSeasonClothes()
		{
			this->hood = true;
		}
};
