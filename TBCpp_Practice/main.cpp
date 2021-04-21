#include<iostream>
#include<bitset>

int main()
{
	using namespace std;

	unsigned int a = 5;
	unsigned int b = 12;

	cout << std::bitset<4>(a | b) << " " << (a | b) << endl;
	cout << std::bitset<4>(a & b) << " " << (a & b) << endl;
	cout << std::bitset<4>(a ^ b) << " " << (a ^ b) << endl;

	return 0;
}