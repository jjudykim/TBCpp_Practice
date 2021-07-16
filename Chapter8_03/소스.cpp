//#include<iostream>
//
//using namespace std;
//
//class Fraction
//{
//private:
//	int _numerator;    // 분자
//	int _denominator;  // 분모
//
//public:
//	Fraction()         // 생성자
//	{
//		_numerator = 0;
//		_denominator = 1;
//	}
//
//	void print()
//	{
//		cout << _numerator << " / " << _denominator << endl;
//	}
//};
//
//int main()
//{
//	Fraction frac;      // 객체가 생성되면서 생성자가 호출된다
//
//	frac.print();       // 출력
//
//	return 0;
//}
//
//// 출력
//// 0 / 1

//#include <iostream>
//
//using namespace std;
//
//class Fraction
//{
//private:
//	int _numerator;
//	int _denominator;
//
//public:
//	Fraction(const int& num_in, const int& den_in)        // 생성자
//	{
//		_numerator = num_in;
//		_denominator = den_in;
//		cout << "Fraction() constructors, frac" << endl;
//	}
//
//	void print()
//	{
//		cout << _numerator << " / " << _denominator << endl;
//	}
//};
//
//int main()
//{                              // 기본 생성자가 없기 때문에 이러면 오류!
//	Fraction one_thirds(1, 3);                             // 객체가 생성되면서 생성자가 호출된다.
//	one_thirds.print();                                   // "1 / 3" 출력
//
//	Fraction frac{ 1, 3 };
//	Fraction frac(1, 3);
//	return 0;
//}

#include<iostream>

using namespace std;

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class First
{
	Second sec;

public:
	First()
	{
		cout << "class First constructor()" << endl;
	}
};

int main()
{
	First fir;

	return 0;
}