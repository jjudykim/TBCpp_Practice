//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Student
//{
//private:
//	int _id;
//	string _name;
//
//public:
//	Student(const string &name_in)
//		: Student(0, name_in)          // 위임 생성자~~~!
//	{
//	}
//
//	Student(const int& id_in, const string &name_in)
//		: _id(id_in), _name(name_in)
//	{
//	}
//
//	void print()
//	{
//		cout << _id << " " << _name << endl;
//	}
//};
//
//int main()
//{
//	Student st1(10, "Jack Jack");
//	st1.print();
//
//	Student st2("Dash");
//	st2.print();
//}

#include<iostream>
#include<string>

using namespace std;


class Student
{
private:
	int _id;
	string _name;

public:
	Student(const string& name_in)
	{
		init(0, name_in);
	}

	Student(const int& id_in, const string& name_in)
	{
		init(id_in, name_in);
	}

	void init(const int& id_in, const string& name_in)
	{
		_id = id_in;
		_name = name_in;
	}

	void print()
	{
		cout << _id << " " << _name << endl;
	}
};

int main()
{
	Student st1(10, "Jack Jack");
	st1.print();

	Student st2("Dash");
	st2.print();
}