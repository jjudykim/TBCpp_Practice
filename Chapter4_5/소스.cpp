#include<iostream>
#include<typeinfo>

int main()
{
	using namespace std;

	int a = 123;
	cout << typeid(a).name() << endl;

	return 0;
}

// Ãâ·Â
// int