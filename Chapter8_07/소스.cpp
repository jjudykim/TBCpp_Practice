//#include<iostream>
//using namespace std;
//
//class Simple
//{
//private:
//	int _id;
//
//public:
//	Simple(int id)
//	{
//		this->setID(id);
//		cout << _id << endl;
//		cout << this << endl;
//	}
//
//	void setID(int id) { _id = id; }
//	int getID() { return _id; }
//};
//
//int main()
//{
//	Simple s1(1), s2(2);
//	s1.setID(2);
//	s2.setID(4);
//
//	cout << &s1 << " " << &s2 << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;

class Calc
{
private:
	int _value;

public:
	Calc(int init_value)
		: _value(init_value)
	{}

	Calc& add(int value) { _value += value; return *this; }
	Calc& sub(int value) { _value -= value; return *this; }
	Calc& mult(int value) { _value *= value; return *this; }
	void print()
	{
		cout << _value << endl;
	}
};

int main()
{
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();
}