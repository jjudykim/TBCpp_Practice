//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int x = 5;
//
//	cout << x << endl;
//	cout << &x << endl;
//	cout << (int)&x << endl;
//	cout << *(&x) << endl; // * : de-reference operator
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int x = 5;        // int ���� x�� 5�� ����
//
//	int* ptr_x = &x;  // int ������ ���� ptr_x�� x�� �ּҰ��� ����
//
//	*ptr_x = 7;       // ptr_x�� ����Ǿ� �ִ� �ּ��� ������ ���� 7�� ����
//
//	cout << x << endl;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	typedef int* pint;  // �̷��Ե� ����� �� ����!
//
//	int x = 5;          // int ���� x�� 5�� ����
//
//	int* ptr_x = &x;    // int ������ ���� ptr_x�� x�� �ּҰ��� ����
//	pint ptr_y = &x;    // int ������ ������ �̸� �����س��� pint�� ptr_y�� x�� �ּҰ��� ����
//
//	*ptr_x = 7;         // ptr_x�� ����Ǿ� �ִ� �ּ��� ������ ���� 7�� ����
//
//	cout << &x << endl;
//	cout << ptr_x << endl;
//	cout << x << endl;  // x�� 7�� ����Ǿ���! 
//
//	return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int x = 5;
//
//	double d = 123.0;
//
//	int *ptr_x = &x;
//	double *ptr_d = &d;
//
//	cout << typeid(ptr_x).name() << endl;
//	cout << typeid(ptr_d).name() << endl;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int x = 5;
//	double d = 123.0;
//
//	int* ptr_x;
//	double* ptr_d;
//
//	cout << sizeof(x) << endl;
//	cout << sizeof(d) << endl;
//	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
//	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
//}

//#include<iostream>
//
//using namespace std;
//
//struct Something
//{
//	int a, b, c, d;
//};
//
//int main()
//{
//	Something ss;
//	Something* ptr_s;
//
//	cout << sizeof(Something) << endl;
//	cout << sizeof(ss) << endl;
//	cout << sizeof(ptr_s) << endl;
//
//	return 0;
//}

#include<iostream>

int main()
{
	double *ptr1 = NULL; // C style
	double *ptr2 = nullptr; // modern c++

	if (ptr2 != nullptr)
	{
		// do something useful
	}
	else
	{
		// do nothing with ptr
	}
}