//#include<iostream>
//
//using namespace std;
//
//int getValue(int x)
//{
//	int value = x * 2;
//
//	return value;
//}
//
//int main()
//{
//	int value = getValue(3);
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int* getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}
//
//int main()
//{
//	int main_value = *getValue(3);
//	int* main_value2 = getValue(3);
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int* allocateMemory(int size)
//{
//	return new int[size];
//}
//
//int main()
//{
//	int* array = allocateMemory(1024);
//
//	return 0;
//}

#include<iostream>

using namespace std;

int& getValue(int x)
{
	int value = x * 2;
	return value;        // value의 참조를 리턴
}

int main()
{
	int& value = getValue(3);

	cout << value << endl;
	cout << value << endl;

	return 0;
}

// 출력
// 