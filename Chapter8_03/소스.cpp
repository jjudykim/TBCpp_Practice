//#include<iostream>
//
//using namespace std;
//
//class Fraction
//{
//private:
//	int _numerator;    // ����
//	int _denominator;  // �и�
//
//public:
//	Fraction()         // ������
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
//	Fraction frac;      // ��ü�� �����Ǹ鼭 �����ڰ� ȣ��ȴ�
//
//	frac.print();       // ���
//
//	return 0;
//}
//
//// ���
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
//	Fraction(const int& num_in, const int& den_in)        // ������
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
//{                              // �⺻ �����ڰ� ���� ������ �̷��� ����!
//	Fraction one_thirds(1, 3);                             // ��ü�� �����Ǹ鼭 �����ڰ� ȣ��ȴ�.
//	one_thirds.print();                                   // "1 / 3" ���
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