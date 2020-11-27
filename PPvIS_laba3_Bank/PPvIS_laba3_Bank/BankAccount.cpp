#include "BankAccount.h"
#include <fstream>
#include <string>
#include <sstream>
#include "NoMoney_exception.h"
#include <windows.h>
#include <iostream>

using namespace std;


BankAccount::BankAccount(int accountNumber, double amountMoney)
{

	this->accountNumber = accountNumber;
	this->amountMoney = amountMoney;

}

int BankAccount::getAccountNumber()
{
	return accountNumber;
}

double BankAccount::getAmountMoney()
{
	return amountMoney;
}

void BankAccount::withdraw(double amount)
{

	try
	{
		if (amount > amountMoney) {
			throw(NoMoney_exception("You do not have enough money \n Money you want to withdraw: " + to_string(amount) + " > Money you have on your account: " + to_string(amountMoney)));
		}
		if (amount <= 0) {

			throw(NoMoney_exception(" Impossible amount: " + to_string(amount)));

		}
		amountMoney = amountMoney - amount;
	}
	catch (NoMoney_exception e) {

		cout << e.what() << endl;
		system("pause");
		system("cls");

	}

	catch (const std::exception&)
	{
		cout << "Problem with your account" << endl;
	}


}