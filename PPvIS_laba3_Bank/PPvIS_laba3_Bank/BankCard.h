#pragma once
#include<iostream>
#include<string>
using namespace std;
class BankCard
{
private:
	int accountNumber;
	int cardNumber;
	string userName;
	int pin;
public:
	BankCard()
	{

	}

	BankCard(int accountNumber, int cardNumber, string userName, int pin);

	int getAccountNumber();
	int getCardNumber();
	string getUserName();
	int getPin();
};


