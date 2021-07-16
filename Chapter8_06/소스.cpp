//#include <iostream>
//
//using namespace std;
//
//class Simple
//{
//private:
//	int _id;
//
//public:
//	Simple(const int& id_in)
//		: _id(id_in)
//	{
//		cout << "constructor" << _id << endl;
//	}
//
//	~Simple()  // 소멸자
//	{
//		cout << "Destructor" << _id << endl;
//	}
//};
//
//int main()
//{
//	Simple s1(0);  // 생성자 호출, _id = 0
//	Simple s2(1);  // 생성자 호출, _id = 1
//
//	return 0;  // 영역을 벗어나면서 두 객체 모두 소멸자 호출 
//}
//
//// 출력
//// Constructor 0
//// Constructor 1
//// Destructor 1
//// Destructor 0

//#include <iostream>
//
//using namespace std;
//
//class Simple
//{
//private:
//	int _id;
//
//public:
//	Simple(const int& id_in)
//		: _id(id_in)
//	{
//		cout << "constructor" << _id << endl;
//	}
//
//	~Simple()  // 소멸자
//	{
//		cout << "Destructor" << _id << endl;
//	}
//};
//
//int main()
//{
//	Simple* s1 = new Simple(0);  // 생성자 호출, _id = 0
//	Simple s2(1);  // 생성자 호출, _id = 1
//
//	delete s1;
//
//	return 0;  // 영역을 벗어나면서 두 객체 모두 소멸자 호출 
//}
//
//// 출력
//// Constructor 0
//// Constructor 1
//// Destructor 1
//// Destructor 0

//#include<iostream>
//
//using namespace std;
//
//class IntArray
//{
//private:
//	int* _arr = nullptr;
//	int _length = 0;
//
//public:
//	IntArray(const int length_in)
//	{
//		_length = length_in;
//		_arr = new int[_length];
//
//		cout << "Constructor" << endl;
//	}
//
//	int size() { return _length; }
//};
//
//int main()
//{
//	while (true)
//	{
//		IntArray my_int_arr(100000);
//	}
//}

#include<iostream>

using namespace std;

class IntArray
{
private:
	int* _arr = nullptr;
	int _length = 0;

public:
	IntArray(const int length_in)
	{
		_length = length_in;
		_arr = new int[_length];

		cout << "Constructor" << endl;
	}

	~IntArray()
	{
		cout << "Desturctor" << endl;
		if (_arr != nullptr) delete[] _arr;         // 객체 소멸 시 _arr 멤버를 해제해준다!
	}
};

int main()
{
	int i = 0;

	while (true)
	{
		IntArray my_int_arr(100000);
		cout << i++ << endl;
	}
}

// 출력
// Constructor
// Desturctor
// Constructor
// Desturctor
// Constructor
// Desturctor
// ...