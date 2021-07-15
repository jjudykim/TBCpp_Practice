//#include <iostream>
//#include <vector>
//
//using namespace std;

//int main()
//{
//	std::vector<int> v{ 1,2,3 };
//
//	for (auto& e : v)     // 1 2 3 출력
//		cout << e << " ";
//	cout << endl;
//
//	cout << v.size() << endl;  // 3 출력
//
//// =====================================================
//
//	v.resize(2);  // 벡터의 사이즈를 2로 조정해주면 
//
//	for (auto& e : v)     // 1 2 출력
//		cout << e << " ";
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;  // 2 3 출력
//
//// ======================================================
//
//	int* ptr = v.data();
//
//	cout << ptr[2] << endl;  // 3 출력  
//
//	return 0;
//}

//int main()
//{
//	std::vector<int> v{ 1, 2, 3 };
//	v.resize(10);
//
//	for (auto& e : v)
//		cout << e << " ";                              // 1 2 3 0 0 0 0 0 0 0 출력
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;   // 10 10 출력
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
//		cout << e << " ";                              // 1 2 3 0 0 0 0 0 0 0 출력
//	cout << endl;
//
//	cout << v.size() << " " << v.capacity() << endl;   // 10 10 출력
//}
//
//// 출력
//// 1 2 3 0 0 0 0 0 0 0
//// 10 10

#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";                              // 출력
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

// 출력
// 1 2 3
// 3 1024