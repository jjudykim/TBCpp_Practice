//#include <iostream>
//#include <vector>
//
//using namespace std;

//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//
//	for (auto& e : v)     // 1 2 3 ���
//		cout << e << " ";
//	cout << endl;
//
//	cout << v.size() << endl;  // 3 ���
//
//// =====================================================
//
//	v.resize(2);  // ������ ����� 2�� �������ָ� 
//
//	for (auto& e : v)     // 1 2 ���
//		cout << e << " ";
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;  // 2 3 ���
//
//// ======================================================
//
//	int* ptr = v.data();
//
//	cout << ptr[2] << endl;  // 3 ���  
//
//	return 0;
//}

//int main()
//{
//	std::vector<int> v{ 1, 2, 3 };
//	v.resize(10);
//
//	for (auto& e : v)
//		cout << e << " ";                              // 1 2 3 0 0 0 0 0 0 0 ���
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;   // 10 10 ���
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	std::vector<int> v{ 1, 2, 3 };
//	v.reserve(1024);
//
//	for (auto& e : v)
//		cout << e << " ";                              // 1 2 3 0 0 0 0 0 0 0 ���
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;   // 10 10 ���
//}
//
//// ���
//// 1 2 3 0 0 0 0 0 0 0
//// 10 10

#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";                              // ���
	cout << endl;
}

int main()
{
	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);
}

// ���
// 1 2 3
// 3 1024