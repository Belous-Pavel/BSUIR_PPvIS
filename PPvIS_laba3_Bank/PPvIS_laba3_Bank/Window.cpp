#include "Window.h"
#include "Pin_code_window.h"
#include "BankCard.h"
#include <iostream>
#include <windows.h>
#include "BankAccount.h"
#include "Cash_Machine.h"



using namespace std;

BankWindow* Window::show(Cash_Machine* cashMachine)
{

	cout << "To withdraw money from your account enter 1" << endl;
	cout << "To see your balance enter 2" << endl;
	cout << "Press 3 to quit" << endl;
	int kod;
	cin >> kod;
	system("cls");
	while (true)
	{
		if (kod != 1 && kod != 2 && kod != 3) {
			cout << "Please enter correct number" << endl;
			cin >> kod;
			system("cls");
		}
		if (kod == 1 || kod == 2 || kod == 3)
		{
			break;
		}
	}
	switch (kod)
	{
	case 1: {

		cout << "Enter the amount of money you want to withdraw" << endl;
		int amount1 = 0;
		cin >> amount1;

		cashMachine->bankServer->accountSearch(cashMachine->getCard()->getAccountNumber())->withdraw(amount1);

		system("pause");
		system("cls");

		break;
	}
	case 2: {

		cout << "Your balance is: ";
		cout << cashMachine->bankServer->accountSearch(cashMachine->getCard()->getAccountNumber())->getAmountMoney() << endl;
		system("pause");
		system("cls");

		break;
	}
	case 3: {

		return nullptr;

		break;
	}


	default:
		return this;
		break;


	}

	return this;

}