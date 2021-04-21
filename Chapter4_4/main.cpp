#include<iostream>

auto add(int x, int y) -> int;
auto add(double x, double y) -> double;

auto add(int x, int y) -> int
{
	return x + y;
}

auto add(double x, double y) -> double
{
	return x + y;
}

int main()
{
	using namespace std;

	auto e = add(3, 5);
	auto f = add(3.3, 5.5);

	cout << e << " " << f << endl;

	return 0;
}