//#include<iostream>
//
//using namespace std;
//
//class Something
//{
//private:
//	int _i;
//	double _d;
//	char _c;
//	int _arr[5];
//
//public:
//	Something()
//		: _i{ 10 }, _d{ 3.14 }, _c{ 'a' }, _arr{ 1, 2, 3, 4, 5 }
//	{
//		cout << _i << endl;
//		cout << _d << endl;
//		cout << _c << endl;
//		cout << _arr << endl;
//	}
//};
//
//int main()
//{
//	Something some;
//}

//#include<iostream>
//
//using namespace std;
//
//class ABC
//{
//private:
//	int _abc;
//
//public:
//	ABC(const int &_abc_in)
//		: _abc{ _abc_in }
//	{
//	}
//	void print()
//	{
//		cout << _abc << endl;
//	}
//};
//
//class Something
//{
//private:
//	int _i;
//	double _d;
//	char _c;
//	int _arr[5];
//	ABC abc;
//
//public:
//	Something()
//		: _i{ 10 }, _d{ 3.14 }, _c{ 'a' }, _arr{ 1, 2, 3, 4, 5 }, abc{ _i - 1 }
//	{
//		cout << _i << endl;
//		cout << _d << endl;
//		cout << _c << endl;
//		cout << _arr << endl;
//		abc.print();
//	}
//};
//
//int main()
//{
//	Something some;
//
//	return 0;
//}

#include<iostream>

using namespace std;

class ABC
{
private:
	int _abc;

public:
	ABC(const int &_abc_in)
		: _abc{ _abc_in }
	{
	}
	void print()
	{
		cout << _abc << endl;
	}
};

class Something
{
private:
    /* 1¹ø */
    int _i = 100;
    double _d = 12.34;
    char _c = 'F';
    int _arr[5] = { 100, 200, 300, 400, 500 };
    ABC abc{ 1024 };

public:
    Something()
        /* 2¹ø */
        : _i{ 10 }, _d{ 3.14 }, _c{ 'a' }, _arr{ 1, 2, 3, 4, 5 }, abc{ _i - 1 }
    {
        /* 3¹ø */
        _i = 3;
        _d = 3.0f;
        _c += 1;
    }

    void print()
    {
        cout << _i << endl;
        cout << _d << endl;
        cout << _c << endl;
        for (auto i : _arr)
        {
            cout << i << '\t';
        }
        cout << endl;
        abc.print();
    }
};

int main()
{
    Something some;
    some.print();
}