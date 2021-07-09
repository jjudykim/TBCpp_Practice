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
//	// 포인터 변수 ptr을 간접 참조 / ptr이 가리키고 있는 주소값 / 포인터 변수 ptr 자체의 주소값
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
//	// *ptr = 10;   // const가 붙어있는 매개변수이기 때문에 불가능하다
//}
//
//void foo2(int* ptr)
//{
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//	*ptr = 10;   // 가능!
//}
//
//int main()
//{
//	int value = 5;
//
//	cout << value << " " << &value << " ";
//	// 포인터 변수 ptr을 간접 참조 / ptr이 가리키고 있는 주소값 
//
//	int* ptr = &value;
//
//	cout << &ptr << endl;
//	// 포인터 변수 ptr 자체의 주소값
//
//	foo(ptr);
//	foo(&value);
//	foo2(ptr);
//
//	return 0;
//}
//
//// 출력
//// 5 0113F878 0113F86C
//// 5 0113F878 0113F798
//// 5 0113F878 0113F798
//
//// 함수 내의 &ptr 주소가 다르게 나온 이유?
//// -> 포인터 변수도 변수다!! 주소값을 복사해 보내주는 변수이니까

//#include<iostream>
//
//using namespace std;
//
//void foo(const int* ptr)
//{
//	// *ptr = 10;   // const가 붙어있는 매개변수이기 때문에 불가능하다
//	cout << *ptr << " " << ptr << " " << &ptr << endl;
//	// 포인터 변수 ptr을 간접 참조 / ptr이 가리키고 있는 주소값 
//}
//
//void foo2(int* ptr)
//{
//	*ptr = 10;      // 가능!
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
//	// 포인터 변수 ptr_value 자체의 주소값
//
//	foo(ptr_value);
//	foo(&value);
//	foo2(ptr_value);
//
//	return 0;
//}
//
//// 출력
//// 5 00D7FC98 00D7FC8C
//// 5 00D7FC98 00D7FBB8
//// 5 00D7FC98 00D7FBB8
//// 5 00D7FC98 00D7FBB8
//
//// 함수 내의 &ptr 주소가 다르게 나온 이유?
//// -> 포인터 변수도 변수다!! 주소값을 복사해 보내주는 변수이니까

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
	// *ptr = 10;   // const가 붙어있는 매개변수이기 때문에 불가능하다
	cout << *ptr << " " << ptr << " " << &ptr << endl;
	// 포인터 변수 ptr을 간접 참조 / ptr이 가리키고 있는 주소값 
}

void foo2(int* ptr)
{
	*ptr = 10;      // 가능!
	cout << *ptr << " " << ptr << " " << &ptr << endl;

}

int main()
{
	int value = 5;

	cout << value << " " << &value << " ";

	int* ptr_value = &value;

	cout << &ptr_value << endl;
	// 포인터 변수 ptr_value 자체의 주소값

	foo(ptr_value);
	foo(&value);
	foo2(ptr_value);


	return 0;
}