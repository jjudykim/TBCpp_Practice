//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//struct Person
//{
//	double height;
//	float weight;
//	int age;
//	string name;
//};
//
//void printPerson(Person ps)
//{
//	// ���� ����� ���� ������ ����ϴ� �Լ�
//	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//	cout << endl;
//}
//
//int main()
//{
//	Person me; // me��� Person ����!
//	// me�� ���� �Է��� �̷��� �� ���� ������
//	me.age = 20;
//	me.name = "jack";
//	me.height = 2.0;
//	me.weight = 100.0;
//	//��� �Լ� ����
//	printPerson(me);
//
//	// �̰� �� �����ϰ���?
//	Person mom{ 2.0, 100.0, 20, "mom" };
//	printPerson(mom);
//
//	Person dad;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Person
//{
//	double height;
//	float weight;
//	int age;
//	string name;
//
//	void print()  // ���ڷ� �־����� �ʾƵ� �ȴ�!
//	{
//		cout << height << " " << weight << " " << age << " " << name;
//		cout << endl;
//	}
//};
//
//struct Family
//{
//	Person me, mom, dad;
//};
//
//int main()
//{
//	Family ourFamily1;
//
//	ourFamily1.me = { 2.0, 100.0, 20, "me" };
//	ourFamily1.me.print(); // �̷� ������ ��� �Լ� ����!
//
//	ourFamily1.mom = { 2.0, 100.0, 50, "mom" };
//	ourFamily1.mom.print();
//
//	Person dad;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//struct Person
//{
//	double height;
//	float weight;
//	int age;
//	string name;
//
//	void print()  // ���ڷ� �־����� �ʾƵ� �ȴ�!
//	{
//		cout << height << " " << weight << " " << age << " " << name;
//		cout << endl;
//	}
//};
//
//Person getMe()
//{
//	Person me{ 2.0, 100.0, 20, "me" };
//
//	return me;
//};
//
//int main()
//{
//	Person me_from_func= getMe();
//	me_from_func.print();
//
//	return 0;
//}

#include<iostream>
#include<string>

using namespace std;

struct Employee   // 2 + 4 + 8 = 14 byte?
{
	short	id;   // 2 bytes
	int		age;  // 4 bytes
	double	wage; // 8 bytes
};

int main()
{
	Employee emp1;

	cout << sizeof(emp1) << endl;

	return 0;
}