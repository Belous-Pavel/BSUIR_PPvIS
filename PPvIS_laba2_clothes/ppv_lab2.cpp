#include <iostream>
#include "Clothes.h"
#include "SummerClothes.h"
#include "WinterClothes.h"
#include "DemiSeasonClothes.h"
#include "MensClothes.h"
#include "SummerMensClothes.h"
#include "WinterMensClothes.h"
#include "DemiSeasonMensClothes.h"

using namespace std;
using namespace Men;
class ClassA
{
public:
	int get()
	{
		return 1;
	}
};
class ClassB
{
public:
	int get()
	{
		return 0;
	}
};

class ClassC :  public ClassA, public ClassB
{
private:
};



int main()
{
	ClassC c;
	cout << c.ClassA::get();
	return 0;
}

