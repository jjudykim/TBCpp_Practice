//#include<iostream>
//
//using namespace std;
//
//void foo(int* ptr)
//{
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//
//}
//
//int main()
//{
//	int value = 5;
//
//	cout << value << " " << &value << " ";
//	// ������ ���� ptr�� ���� ���� / ptr�� ����Ű�� �ִ� �ּҰ� / ������ ���� ptr ��ü�� �ּҰ�
//
//	int* ptr = &value;
//
//	cout << &ptr << endl;
//
//	foo(ptr);
//	foo(&value);
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//void foo(const int* ptr)
//{
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//	// *ptr = 10;   // const�� �پ��ִ� �Ű������̱� ������ �Ұ����ϴ�
//}
//
//void foo2(int* ptr)
//{
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//	*ptr = 10;   // ����!
//}
//
//int main()
//{
//	int value = 5;
//
//	cout << value << " " << &value << " ";
//	// ������ ���� ptr�� ���� ���� / ptr�� ����Ű�� �ִ� �ּҰ� 
//
//	int* ptr = &value;
//
//	cout << &ptr << endl;
//	// ������ ���� ptr ��ü�� �ּҰ�
//
//	foo(ptr);
//	foo(&value);
//	foo2(ptr);
//
//	return 0;
//}
//
//// ���
//// 5 0113F878 0113F86C
//// 5 0113F878 0113F798
//// 5 0113F878 0113F798
//
//// �Լ� ���� &ptr �ּҰ� �ٸ��� ���� ����?
//// -> ������ ������ ������!! �ּҰ��� ������ �����ִ� �����̴ϱ�

//#include<iostream>
//
//using namespace std;
//
//void foo(const int* ptr)
//{
//	// *ptr = 10;   // const�� �پ��ִ� �Ű������̱� ������ �Ұ����ϴ�
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//	// ������ ���� ptr�� ���� ���� / ptr�� ����Ű�� �ִ� �ּҰ� 
//}
//
//void foo2(int* ptr)
//{
//	*ptr = 10;      // ����!
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//
//}
//
//int main()
//{
//	int value = 5;
//
//	cout << value << " " << &value << " ";
//
//	int* ptr_value = &value;
//
//	cout << &ptr_value << endl;
//	// ������ ���� ptr_value ��ü�� �ּҰ�
//
//	foo(ptr_value);
//	foo(&value);
//	foo2(ptr_value);
//
//	return 0;
//}
//
//// ���
//// 5 00D7FC98 00D7FC8C
//// 5 00D7FC98 00D7FBB8
//// 5 00D7FC98 00D7FBB8
//// 5 00D7FC98 00D7FBB8
//
//// �Լ� ���� &ptr �ּҰ� �ٸ��� ���� ����?
//// -> ������ ������ ������!! �ּҰ��� ������ �����ִ� �����̴ϱ�

//#include<iostream>
//
//using namespace std;
//
//typedef int* pint;
//
//void func(double degrees, double* sin_out, double* cos_out)
//{
//	*sin_out = 1.0;
//	*cos_out = 2.0;
//}
//
//int main()
//{
//	double degrees = 30;
//	double sin, cos;
//
//	func(degrees, &sin, &cos);
//
//	cout << sin << " " << cos << endl;
//}

#include<iostream>

using namespace std;

void foo(const int* ptr)
{
	// *ptr = 10;   // const�� �پ��ִ� �Ű������̱� ������ �Ұ����ϴ�
	cout << *ptr << " " << ptr << " " << &ptr << endl;
	// ������ ���� ptr�� ���� ���� / ptr�� ����Ű�� �ִ� �ּҰ� 
}

void foo2(int* ptr)
{
	*ptr = 10;      // ����!
	cout << *ptr << " " << ptr << " " << &ptr << endl;

}

int main()
{
	int value = 5;

	cout << value << " " << &value << " ";

	int* ptr_value = &value;

	cout << &ptr_value << endl;
	// ������ ���� ptr_value ��ü�� �ּҰ�

	foo(ptr_value);
	foo(&value);
	foo2(ptr_value);


	return 0;
}