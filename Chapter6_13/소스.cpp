//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int a = 5;         // a�� ���
//	int b = 10;              // b�� �׳� ����
//
//	const int* ptr_a = &a;   // a�� ����Ű�� ������
//	const int* ptr_b = &b;   // b�� ����Ű�� ������
//
//	ptr_a = nullptr;         // ����
//}

#include<iostream>

using namespace std;

int main()
{
	int value = 5;
	int* const ptr = &value;  // �Ϲ� ������ �ּҸ� const �����ͷ� ����!

	*ptr = 10;                // ���� ������ ������ ���� ����!
	cout << *ptr << endl;

	int value2 = 8;
	ptr = &value2;            // �Ұ���!! �����Ͱ� ������ �ִ� �ּҰ��� ������ �� ����!
}