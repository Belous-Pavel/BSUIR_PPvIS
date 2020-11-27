#include "Pin_code_window.h"
#include "Window.h"
#include "Cash_Machine.h"
#include "BankWindow.h"
#include <windows.h>

BankWindow* Pin_code_window::show(Cash_Machine* cashMachine) {

    cout << "Input your PIN" << endl;

    int Pin_code = 0;
    cin >> Pin_code;
    if (cashMachine->checkPin(Pin_code))
    {
        system("cls");
        return new Window();
    }
    else
    {
        system("cls");
        cout << "Incorrect PIN, try again)" << endl;
        return this;
    }
}