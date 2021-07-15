#include<iostream>

using namespace std;

int main()
{
	string hello = "Hello, my name is Jack";

	cout << hello.length() << endl;  // 22 출력

	int ix;
	cin >> ix;

	cout << hello[ix] << endl;       // 여기서 사용자가 1000를 입력해버리면 런타임 에러 발생
}