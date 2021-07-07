//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int value = 5;
//
//	int* ptr = &value;     // 기존에 포인터를 이런 방식으로 사용했다!
//
//	int& ref = value;      // >>> 얘가 바로 참조 <<<
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
//	int& ref = a;        // ref는 a의 별명이 됨
//	cout << ref << endl;
//
//	ref = b;             // ref는 b의 별명이 됨
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
//// 출력
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