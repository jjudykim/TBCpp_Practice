//#include<iostream>
//#include<typeinfo>
//
//int main()
//{
//	using namespace std;
//
//	int a = 123;
//	cout << typeid(a).name() << endl;
//
//	return 0;
//}
//
//// ���
//// int

//#include<iostream>
//#include<typeinfo>
//
//int main()
//{
//	using namespace std;
//
//	int a = 123.0;
//	cout << typeid(a).name() << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<typeinfo>
//#include<iomanip>
//
//int main()
//{
//	using namespace std;
//
//	// numeric conversion
//	float f = 3.14;
//	int i = f;
//
//	cout << std::setprecision(12) << f << endl;
//	cout << std::setprecision(12) << i << endl;
//}

#include<iostream>
#include<typeinfo>
#include<iomanip>

int main()
{
	using namespace std;

	// ��� ����� unsigned�� �����Ϸ� �Ѵ�!
	cout << 5u - 10 << endl;
	cout << 5 - 10u << endl;
	cout << 5u - 10u << endl;
	cout << 5 - 10 << endl;
}