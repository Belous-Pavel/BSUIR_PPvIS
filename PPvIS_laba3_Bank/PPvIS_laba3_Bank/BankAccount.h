#pragma once
class BankAccount
{
private:
	int accountNumber;
	double amountMoney;
public:

	BankAccount()
	{

	}

	BankAccount(int accountNumber, double amountMoney);
	int getAccountNumber();
	double getAmountMoney();
	void withdraw(double amount);
};
