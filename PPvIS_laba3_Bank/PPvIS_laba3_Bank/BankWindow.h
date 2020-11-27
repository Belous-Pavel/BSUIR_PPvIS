#pragma once

#include"Cash_Machine.h"
class BankWindow
{
public:

	virtual BankWindow* show(Cash_Machine* cashMachine) = 0;

}; 