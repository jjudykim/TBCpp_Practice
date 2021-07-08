//#include<iostream>
//#include<array>
//
//using namespace std;
//
//int main()
//{
//	// 기존에 정적 배열을 선언하던 방법
//	int my_arr[5] = {1, 2, 3, 4, 5};
//
//	array<int, 5> my_new_arr = { 1, 2, 3, 4, 5 };
//
//	my_arr[0] = 3;
//	my_arr[1] = 2;
//	cout << my_arr[0] << my_arr[1]; 
//	my_new_arr = { 2, 3, 4, 5, 6 };
//}

//#include<iostream>
//#include<array>
//
//using namespace std;
//
//int main()
//{
//	array<int, 5> my_new_arr = { 1, 2, 3, 4, 5 };
//	my_new_arr = { 2, 3, 4, 5, 6 };
//
//	// cout << my_new_arr[10] << endl;            // X 오류... 나는 크기에 대해 검사하지 않고 바로 실행한다!
//	// cout << my_new_arr.at(10) << endl;         // 나는 10번째 index에 접근해도 되는지 배열 크기를 확인한 후 실행한다! 안되면 예외처리!
//
//	cout << my_new_arr.size() << endl;
//}

//#include<iostream>
//#include<array>
//
//using namespace std;
//
//void printLength(array<int, 5> arr)
//{
//	cout << arr.size() << endl;
//}
//
//
//int main()
//{
//	array<int, 5> my_new_arr = { 1, 2, 3, 4, 5 };
//
//	printLength(my_new_arr);
//}

//#include<iostream>
//#include<array>
//
//using namespace std;
//
//void printLength(const array<int, 5>& arr)
//{
//	cout << arr.size() << endl;
//}
//
//
//int main()
//{
//	array<int, 5> my_new_arr = { 1, 2, 3, 4, 5 };
//
//	printLength(my_new_arr);
//}
//
//// 출력
//// 5

//#include<iostream>
//
//using namespace std;
//
//void printArray(int *arr)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int main()
//{
//	int array[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = array;
//
//	printArray(array);
//}

//#include<iostream>
//#include<array>
//
//using namespace std;
//
//int main()
//{
//	array<int, 5> my_arr = { 1, 21, 3, 40, 5 };
//
//	for (auto element : my_arr)
//		cout << element << " ";
//	cout << endl;
//}

#include<iostream>
#include<array>     
#include<algorithm> // 3, 4

using namespace std;

int main()
{
	array<int, 5> my_new_arr = { 1, 2, 3, 4, 5 };
	my_new_arr = { 2, 3, 4, 5, 6 };

	//cout << my_new_arr[10] << endl;                     // X 오류... 나는 크기에 대해 검사하지 않고 바로 실행한다!
	//cout << my_new_arr.at(10) << endl;                  // 1. 나는 10번째 index에 접근해도 되는지 배열 크기를 확인한 후 실행한다! 안되면 예외처리!

	cout << my_new_arr.size() << endl;                  // 2. 배열의 크기(원소의 개수)인 5가 반환

	sort(my_new_arr.begin(), my_new_arr.end());            // 3. 배열을 오름차순으로 정렬

	for (auto& element : my_new_arr)
		cout << element << " ";
	cout << endl;

	sort(my_new_arr.rbegin(), my_new_arr.rend());  // 4. 배열을 내림차순으로 정렬

	for (auto& element : my_new_arr)
		cout << element << " ";
	cout << endl;
}