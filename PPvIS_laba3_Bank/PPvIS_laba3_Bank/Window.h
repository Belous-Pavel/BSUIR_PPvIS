#pragma once
#include "BankWindow.h"
#include"Cash_Machine.h"
class Window : public BankWindow
{
	BankWindow* show(Cash_Machine* cashMachine);
}; 