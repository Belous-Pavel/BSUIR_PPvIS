#pragma once
#include"BankAccount.h"
#include<iostream>
#include<vector>
using namespace std;
class BankServer
{
private:
	vector<BankAccount> accountList;
public:
	void fillAccountList();
	BankAccount* accountSearch(int accountNumber);

};

