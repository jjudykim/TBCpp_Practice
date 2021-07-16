//#include<iostream>
//
//using namespace std;
//
//class Date
//{
//public :             // access specifier
//	int _month;
//	int _day;
//	int _year;
//
//private :
//	int _hour;
//	int _min;
//	int _sec;
//};
//
//int main()
//{
//	Date today;
//
//	today._month = 8;
//	today._day = 4;
//	today._year = 2022;
//
//	today._hour = 4;
//	today._min = 20;
//	today._sec = 8;
//
//	cout << today._hour << endl;
//}

//#include <iostream>
//
//using namespace std;
//
//class Date
//{
//	int _month;
//	int _day;
//	int _year;
//
//public:
//	void setDate(const int& month_input, const int& day_input, const int& year_input)
//	{
//		_month = month_input;
//		_day = day_input;
//		_year = year_input;
//	}
//
//	void setYear(const int& year_input)
//	{
//		_year = year_input;
//	}
//};
//
//int main()
//{
//	Date today;
//
//	today.setDate(8, 4, 2025);    // 멤버 3개를 각각 초기화 해준다.
//	today.setYear(2020);            // _year 멤버변수의 값을 2020으로 바꾼다.  
//
//	return 0;
//}

#include <iostream>

using namespace std;

class Date
{
    int _month;
    int _day;
    int _year;

public:
    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        _month = month_input;
        _day = day_input;
        _year = year_input;
    }

    const int& getMonth()
    {
        return _month;
    }

    const int& getDay()
    {
        return _day;
    }

    const int& getYear()
    {
        return _year;
    }

    void copyFrom(const Date& original)
    {
        _month = original._month;
        _day = original._day;
        _year = original._year;
    }
};

void print(Date& original)
{
    cout << original.getMonth() << " " << original.getDay() << " " << original.getYear() << endl;
}

int main()
{
    Date today;     // today 객체
    Date tomorrow;  // tomorrow 객체

    today.setDate(8, 4, 2022);
    tomorrow.copyFrom(today);
    // tommorow.setDate(today.getMonth(), today.getDay(). today.getYear())

    print(today);
    print(tomorrow);
   

    return 0;
}