#include<iostream>

using namespace std;

class Friend
{
public:
	string _name;                       // ���� �ڵ���Ÿ�Ϸδ� ��� ������ ��� �տ� _(�����)�� �ٿ��ش�!
	string _address;                    // �򰥸��� �� �����ϱ� ���ؼ�!
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

	rachel._name = "Rachel";            // ��ü�� ��� ������ �����Ϸ��� . ���
	rachel._address = "Seoul";
	rachel._age = 2;
	rachel._height = 30;
	rachel._weight = 10;

	rachel.print();                    // ���!

	return 0;
}