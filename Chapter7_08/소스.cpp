#include<iostream>

using namespace std;

void func_1(int x = 1, int y = 1, int z = 2) {} // O ����. func_1();�� ȣ���� �����ϸ� 1, 1, 2�� �ʱ�ȭ��

void func_2(int x, int y, int z = 2) {} // O ����. func_(3, 4);�� ȣ���� �����ϸ� ������ �Ű������� 2�� �ʱ�ȭ��

void func_3(int x = 1, int y, int z) {} // X �Ұ���. z�� ����Ʈ ���� �����Ǿ� ���� �ʱ� ����

int main()
{

}