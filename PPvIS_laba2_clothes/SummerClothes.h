#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SummerClothes : public virtual Clothes
{
protected:
		int underSleeve;
public:
		int getSleeve() { return underSleeve; }

		virtual void rollUpSleeve() { underSleeve += 2; }
		virtual void rollDownSleeve()
		{
			if (underSleeve > 0) underSleeve -= 2 ;
		}

		SummerClothes()
		{
			this->underSleeve = 0;
		}
};
