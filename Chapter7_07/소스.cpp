//#include<iostream>
//
//using namespace std;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//double add(double x, double y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = add(1, 2);
//	double b = add(3.0, 4.0);
//
//	cout << a << endl << b << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int add(int x, int y, int z)
//{
//	return x + y + z;
//}
//
//int main()
//{
//	int a = add(1, 2);
//	int b = add(3, 4, 5);
//
//	cout << a << endl << b << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//void print(char* value) {}
//void print(int value) {}
//
//int main()
//{
//    print(0);    // void print(int value) �� ��Ī�ȴ�.
//    print('a');  // void print(int value) �� ��Ī�ȴ�. 
//    print("a");  // ��ġ�Ǵ� �Լ��� ���ٰ� ���´�! 
//
//    return 0;
//}

#include<iostream>

using namespace std;

void print(const char* value) {}
void print(int value) {}

int main()
{
    print(0);    // void print(int value) �� ��Ī�ȴ�.
    print("a");  // void print(const char *value)�� ��Ī�ȴ�.

    return 0;
}