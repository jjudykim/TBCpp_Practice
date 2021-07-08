//#include<iostream>
//#include<array>
//
//using namespace std;
//
//int main()
//{
//	// ������ ���� �迭�� �����ϴ� ���
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
//	// cout << my_new_arr[10] << endl;            // X ����... ���� ũ�⿡ ���� �˻����� �ʰ� �ٷ� �����Ѵ�!
//	// cout << my_new_arr.at(10) << endl;         // ���� 10��° index�� �����ص� �Ǵ��� �迭 ũ�⸦ Ȯ���� �� �����Ѵ�! �ȵǸ� ����ó��!
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
//// ���
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

	//cout << my_new_arr[10] << endl;                     // X ����... ���� ũ�⿡ ���� �˻����� �ʰ� �ٷ� �����Ѵ�!
	//cout << my_new_arr.at(10) << endl;                  // 1. ���� 10��° index�� �����ص� �Ǵ��� �迭 ũ�⸦ Ȯ���� �� �����Ѵ�! �ȵǸ� ����ó��!

	cout << my_new_arr.size() << endl;                  // 2. �迭�� ũ��(������ ����)�� 5�� ��ȯ

	sort(my_new_arr.begin(), my_new_arr.end());            // 3. �迭�� ������������ ����

	for (auto& element : my_new_arr)
		cout << element << " ";
	cout << endl;

	sort(my_new_arr.rbegin(), my_new_arr.rend());  // 4. �迭�� ������������ ����

	for (auto& element : my_new_arr)
		cout << element << " ";
	cout << endl;
}