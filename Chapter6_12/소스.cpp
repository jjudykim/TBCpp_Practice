#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;  // ���� �߿� �Է����� ������ ũ��

	int* array = new int[length] {1, 2, 3, 4, 5}; // �����Ҵ� 

	for (int i = 0; i < length; ++i) // ���� ����
		cout << *(array + i) << endl; // array[i] �� �ص� ����

	delete[] array; // �޸� ���� ��������
}