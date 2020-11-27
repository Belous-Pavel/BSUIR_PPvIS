#include "BankCard.h"

BankCard::BankCard(int accountNumber, int cardNumber, string userName, int pin)
{
	this->accountNumber = accountNumber;
	this->cardNumber = cardNumber;
	this->userName = userName;
	this->pin = pin;
}

int BankCard::getAccountNumber()
{
	return accountNumber;
}

int BankCard::getCardNumber()
{
	return cardNumber;
}

string BankCard::getUserName()
{
	return userName;
}

int BankCard::getPin()
{
	return pin;
}