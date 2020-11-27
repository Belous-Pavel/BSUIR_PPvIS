#pragma once
#include "BankCard.h"
#include "BankServer.h"
class Cash_Machine
{
public:

	BankCard* fillBankCardFromFile();
	void StartCashMachine();
	bool checkPin(int pin);
	BankServer* bankServer = new BankServer();
	BankCard* getCard();

private:
	BankCard* card = nullptr;
};
