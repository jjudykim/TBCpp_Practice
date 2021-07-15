//#include<iostream>
//
//using namespace std;
//
//int func(int x)
//{
//	return x;
//}
//
//int main()
//{
//	cout << func << endl;                 //
//
//	int (*funcptr)(int) = func;           // �Լ� �������� funcptr�� �����ϰ� �ʱ�ȭ��!
//
//	cout << funcptr << endl;              // 
//}

//#include<iostream>
//
//using namespace std;
//
//int func(int x)
//{
//	return x;
//}
//
//int main()
//{
//	cout << func << endl;
//	int (*funcptr)(int) = func;
//	cout << funcptr << endl;
//
//	cout << funcptr(5) << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//int func(int x)
//{
//	return x;
//}
//
//int func2()
//{
//	return 0;
//}
//
//int main()
//{
//	cout << func << endl;
//	int (*funcptr)(int) = func;
//	cout << funcptr << endl;
//
//	cout << funcptr(5) << endl;  // func �Լ��� �ּҸ� ������ �ִ� ������ funcptr�� func �Լ��� ����� �� ����!
//	//funcptr = func2;
//}
//
//// ���
//// 008712FD
//// 008712FD
//// 5

#include<iostream>
#include<array>

using namespace std;

bool isEven(const int& number)
{
    if (number % 2 == 0) return true;
}

bool isOdd(const int& number)
{
    if (number % 2 == 1) return true;
}

void printNumbers(const array<int, 10>& my_array, bool(*check_fcn)(const int&))
{
    for (auto element : my_array)
    {
        if (check_fcn(element) == true) cout << element;
    }
    cout << endl;
}

int main()
{
    std::array<int, 10> my_array{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    printNumbers(my_array, isEven); // ¦���� ���Ҹ� ���
    printNumbers(my_array, isOdd); // Ȧ���� ���Ҹ� ���
}