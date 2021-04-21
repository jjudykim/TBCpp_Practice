//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int apple = 5;
//	apple = 1;
//
//	{
//		apple = 3;
//		int banana = 1;
//	}
//
//	//banana = 5; // ERROR. 더 작은 중괄호 안에 선언되었기 때문에
//
//	return 0;
//}
//
////apple = 3;     // ERROR. 지역변수는 함수 안에서만 사용 가능

#include<iostream>

using namespace std;

namespace work1
{
	int a = 0;

	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 0;

	void doSomething()
	{
		a += 5;
	}
}


int main()
{
	
	//...
	cout << work1::a << endl;
	work1::doSomething();
	cout << work1::a << endl << endl;

	cout << work2::a << endl;
	work2::doSomething();
	cout << work2::a << endl << endl;

	return 0;
}
