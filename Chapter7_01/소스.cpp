#include<iostream>

using namespace std;

int foo(int x, int y);    // int x�� int y�� foo��� �Լ��� parameter(�Ű�����)!

int foo(int x, int y)
{
	return x + y;
} // x and y are destroyed here

int main()
{ 
	int x = 1, y = 2;

	foo(6, 7);           // 6, 7 : arguments(����, actual parameters)
	foo(x, y + 1);       // y+1�� 3�̶�� ���� arguments�� ����
}