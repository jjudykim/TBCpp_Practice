#include<iostream>

using namespace std;

int getInt()
{
	cout << "Enter a integer number : ";
	int x;
	cin >> x;

	return x;
}

char getOperator()
{
	cout << "Enter an operator (+, -) : "; //TODO : more operators *, / etc.
	char op;
	cin >> op;
	return op;
}

void printResult(int x, char op, int y)
{
	switch (op)
	{
	case '+':
		cout << x + y << endl;
		break;
	case '-':
		cout << x - y << endl;
		break;
	default:
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}