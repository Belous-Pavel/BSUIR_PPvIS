#include "BankServer.h"
#include"BankAccount.h"
#include<iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<vector>
using namespace std;

void BankServer::fillAccountList()
{

	
	ifstream accountListFile("Client_List.txt", ios::in);
	if (!accountListFile) {
		cout << "cannot open file\n";
		exit(1);
	}

	
	string data;
	while (getline(accountListFile, data)) {

		
		stringstream sst(data);
		string a;
		vector<string> vfield;
		while (getline(sst, a, ';'))
			vfield.push_back(a);
		int xx = stoi("12");

		BankAccount b(stoi(vfield[0]), stoi(vfield[1]));
		accountList.push_back(b);

	}
}

BankAccount* BankServer::accountSearch(int accountNumber)
{
	vector <BankAccount> ::iterator it;
	for (it = accountList.begin(); it <= accountList.end(); it++) {
		if (accountNumber == it->getAccountNumber())
		{
			break;
		}
	}

	return &*it;
}