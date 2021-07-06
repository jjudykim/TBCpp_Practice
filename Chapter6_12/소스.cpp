#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;  // 실행 중에 입력으로 결정된 크기

	int* array = new int[length] {1, 2, 3, 4, 5}; // 동적할당 

	for (int i = 0; i < length; ++i) // 원소 대입
		cout << *(array + i) << endl; // array[i] 로 해도 괜춘

	delete[] array; // 메모리 해제 잊지말기
}