#include "NoMoney_exception.h"
#include<iostream>
#include<string>

using namespace std;

NoMoney_exception::NoMoney_exception()
{

}

NoMoney_exception::NoMoney_exception(string message) :exception(message.c_str()) {}
