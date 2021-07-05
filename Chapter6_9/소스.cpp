//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int value = 7;
//	int* ptr = &value;
//
//	cout << uintptr_t(ptr - 1) << endl;
//	cout << uintptr_t(ptr) << endl;
//	cout << uintptr_t(ptr + 1) << endl;
//	cout << uintptr_t(ptr + 2) << endl;
//
//	return 0;
//}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int array[] = { 9, 7, 5, 3, 1 };
	int* ptr = array;

	cout << array[0] << " " << (uintptr_t) & array[0] << endl;
	cout << array[1] << " " << (uintptr_t) & array[1] << endl;
	cout << array[2] << " " << (uintptr_t) & array[2] << endl;
	cout << array[3] << " " << (uintptr_t) & array[3] << endl << endl;

	for (int i = 0; i < 4; i++)
		cout << *(ptr + i) << " " << (uintptr_t)(ptr + i) << endl;

	return 0;
}