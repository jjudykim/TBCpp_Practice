#include<iostream>
#include"MyConstants.h"

using namespace std;

void doSomething()
{
	using namespace std;

	cout << "In test.cpp" << Constants::pi << endl;
	cout << &Constants::pi << endl;
}