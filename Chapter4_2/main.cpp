#include<iostream>
#include"MyConstants.h"

using namespace std;

void doSomething();

int main()
{
	cout << "In main.cpp file" << Constants::pi << endl;
	cout << &Constants::pi << endl;

	doSomething();

	return 0;
}