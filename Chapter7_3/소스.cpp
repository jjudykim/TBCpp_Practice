//#include<iostream>
//
//using namespace std;
//
//void addOne(int& y)
//{
//	y = y + 1;
//	cout << "In func : " << y << " " << &y << endl;
//}
//
//int main()
//{
//	int x = 5;
//
//	cout << "In main : " << x << " " << &x << endl;
//
//	addOne(x);
//
//	cout << "In main : " << x << " " << &x << endl;
//}

//#include<iostream>
//#include<cmath>    // sin(), cos()
//
//using namespace std;
//
//void getSinCos(double degrees, double& sin_out, double& cos_out)
//{
//	static const double pi = 3.141592;
//	double radians = degrees * pi / 180.0;
//	sin_out = std::sin(radians);
//	cos_out = std::cos(radians);
//}
//
//int main()
//{
//	double sin(0.0);
//	double cos(0.0);
//
//	getSinCos(30.0, sin, cos);
//
//	cout << sin << " " << cos << endl;
//}


//#include<iostream>
//
//using namespace std;
//
//void foo(int &x)
//{
//	cout << x << endl;
//}
//
//int main()
//{
//	foo(6);
//}

//#include<iostream>
//
//using namespace std;
//
//typedef int* pint;
//
//void foo(int*& ptr)                       // (int*) &ptr 이라고 생각하면 됨!
//{
//	cout << ptr << " " << &ptr << endl;
//}
//
//void foo2(pint& ptr)
//{
//	cout << ptr << " " << &ptr << endl;
//}
//
//int main()
//{
//	int x = 5;
//	int* ptr = &x;
//	pint ptr2 = &x;
//
//	foo(ptr);
//	foo2(ptr2);
//}
//

#include<iostream>

using namespace std;

void printElement(int(&arr)[4])
{
	for (auto& elements : arr)
		cout << elements << endl;
}

int main()
{
	int array[4] = { 1, 2, 3, 4 };

	printElement(array);
}