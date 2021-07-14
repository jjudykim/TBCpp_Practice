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
//    print(0);    // void print(int value) 에 매칭된다.
//    print('a');  // void print(int value) 에 매칭된다. 
//    print("a");  // 매치되는 함수가 없다고 나온다! 
//
//    return 0;
//}

#include<iostream>

using namespace std;

void print(const char* value) {}
void print(int value) {}

int main()
{
    print(0);    // void print(int value) 에 매칭된다.
    print("a");  // void print(const char *value)에 매칭된다.

    return 0;
}