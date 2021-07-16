#include<iostream>

using namespace std;

class Friend
{
public:
	string _name;                       // 요즘 코딩스타일로는 멤버 변수일 경우 앞에 _(언더바)를 붙여준다!
	string _address;                    // 헷갈리는 걸 방지하기 위해서!
	int _age;
	double _height;
	double _weight;

	void print()
	{
		cout << _name << " " << _address << " " << _age << " " << _height << " " << _weight << endl;
	}
};


int main()
{
	Friend rachel;

	rachel._name = "Rachel";            // 객체의 멤버 변수에 접근하려면 . 사용
	rachel._address = "Seoul";
	rachel._age = 2;
	rachel._height = 30;
	rachel._weight = 10;

	rachel.print();                    // 깔끔!

	return 0;
}