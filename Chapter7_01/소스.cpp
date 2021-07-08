#include<iostream>

using namespace std;

int foo(int x, int y);    // int x와 int y는 foo라는 함수의 parameter(매개변수)!

int foo(int x, int y)
{
	return x + y;
} // x and y are destroyed here

int main()
{ 
	int x = 1, y = 2;

	foo(6, 7);           // 6, 7 : arguments(인자, actual parameters)
	foo(x, y + 1);       // y+1된 3이라는 값이 arguments로 전달
}