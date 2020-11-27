#include "Cash_Machine.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "BankCard.h"
#include "Pin_code_window.h"
#include "BankAccount.h"
#include "BankServer.h"

using namespace std;

BankCard* Cash_Machine::fillBankCardFromFile() {

	
	ifstream BankCardFile("BankCard.txt", ios::in);
	if (!BankCardFile) {
		cout << "cannot open file\n";
		exit(1);
	}

	
	string data;
	while (getline(BankCardFile, data)) {

		
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);



		BankCard* temp = new BankCard(stoi(vfield[0]), stoi(vfield[1]), vfield[2], stoi(vfield[3]));

		return temp;
	}
}

void Cash_Machine::StartCashMachine()
{
	card = fillBankCardFromFile();
	bankServer->fillAccountList();
	BankWindow* window = new Pin_code_window();
	while (window != nullptr) {
		window = window->show(this);
	}

}

bool Cash_Machine::checkPin(int pin)
{

	return (pin == card->getPin());
}

BankCard* Cash_Machine::getCard()
{
	return card;
}
