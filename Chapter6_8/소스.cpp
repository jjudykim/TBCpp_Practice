//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	int array[5] = { 9, 7, 5, 3, 1 };
//
//	cout << array[0] << " " << array[1] << endl;
//	cout << array << endl;
//	cout << &(array[0]) << endl;
//
//	cout << *array << endl;
//
//	return 0;
//}
//
//// 출력
//// 9 7
//// 009DF870    -> 즉, 배열의 이름은 포인터이다!!
//// 009DF870


//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	char name[] = "jackjack";
//	cout << *name << endl;
//
//	return 0;
//}
//
//// 출력

//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	int array[5] = { 9, 7, 5, 3, 1 };
//
//	cout << array[0] << " " << array[1] << endl;
//	cout << array << endl;
//	cout << &(array[0]) << endl;
//
//	int* ptr = array;
//	cout << ptr << endl;
//	cout << *ptr << endl;
//	cout << &(ptr) << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};

void doSomething(MyStruct ms)
{
	cout << sizeof(ms.array) << endl;
}

int main()
{
	MyStruct ms;

	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	doSomething(ms);
}

