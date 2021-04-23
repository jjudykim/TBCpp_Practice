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
//	// 대충 사람에 대한 정보를 출력하는 함수
//	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//	cout << endl;
//}
//
//int main()
//{
//	Person me; // me라는 Person 생성!
//	// me의 정보 입력은 이렇게 할 수도 있지만
//	me.age = 20;
//	me.name = "jack";
//	me.height = 2.0;
//	me.weight = 100.0;
//	//출력 함수 실행
//	printPerson(me);
//
//	// 이게 더 간편하겠지?
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
//	void print()  // 인자로 넣어주지 않아도 된다!
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
//	ourFamily1.me.print(); // 이런 식으로 멤버 함수 실행!
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
//	void print()  // 인자로 넣어주지 않아도 된다!
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