//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int a = 5;         // a는 상수
//	int b = 10;              // b는 그냥 변수
//
//	const int* ptr_a = &a;   // a를 가리키는 포인터
//	const int* ptr_b = &b;   // b를 가리키는 포인터
//
//	ptr_a = nullptr;         // 가능
//}

#include<iostream>

using namespace std;

int main()
{
	int value = 5;
	int* const ptr = &value;  // 일반 변수의 주소를 const 포인터로 저장!

	*ptr = 10;                // 간접 참조로 데이터 변경 가능!
	cout << *ptr << endl;

	int value2 = 8;
	ptr = &value2;            // 불가능!! 포인터가 가지고 있는 주소값을 변경할 수 없음!
}