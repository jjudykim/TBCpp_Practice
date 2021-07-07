//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int value = 5;
//
//	int* ptr = &value;     // ������ �����͸� �̷� ������� ����ߴ�!
//
//	int& ref = value;      // >>> �갡 �ٷ� ���� <<<
//
//	cout << &value << endl;
//	cout << ref << endl;
//	cout << &ref << endl;
//	cout << ptr << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 1;
//	int b = 9;
//
//	int& ref = a;        // ref�� a�� ������ ��
//	cout << ref << endl;
//
//	ref = b;             // ref�� b�� ������ ��
//	cout << ref << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//void doSomething(int& n)
//{
//	n = 10;
//	cout << "In doSomething " << n << endl;
//	cout << "In doSomething " << &n << endl;
//}
//
//int main()
//{
//	int n = 5;
//
//	cout << n << endl;
//	cout << &n << endl;
//
//	doSomething(n);
//
//	cout << n << endl;
//	cout << &n << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//void doSomething(const int& n)
//{
//	n = 10;
//	cout << "In doSomething " << n << endl;
//	cout << "In doSomething " << &n << endl;
//}
//
//int main()
//{
//	int n = 5;
//
//	cout << n << endl;
//	cout << &n << endl;
//
//	doSomething(n);
//
//	cout << n << endl;
//	cout << &n << endl;
//}
//
//// ���
//// 5
//// 0135FCA8
//// In doSomething 10
//// In doSomething 0135FCA8
//// 10
//// 0135FCA8

#include<iostream>

using namespace std;

void printElements(int (&arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << arr << endl;
}

int main()
{
	const int length = 5;
	int arr[length] = { 1, 2, 3, 4, 5 };

	printElements(arr);

	cout << arr << endl;
}