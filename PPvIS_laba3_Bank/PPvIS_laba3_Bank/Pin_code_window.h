#pragma once
#include "Window.h"
#include "BankCard.h"
#include"Cash_Machine.h"
#include <iostream>

using namespace std;

class Pin_code_window : public BankWindow
{
private:
	int Pin_code;

public:

	BankWindow* show(Cash_Machine* cashMachine);

};

