#pragma once
#include<iostream>
#include<string>

using namespace std;

class NoMoney_exception : public exception
{
public:

	NoMoney_exception();

	NoMoney_exception(string message);


};
