//#include<iostream>
//#include<typeinfo>
//
//enum Color  //Color�� Ÿ���� �̸�!
//{
//	COLOR_BLACK = -5,
//	COLOR_RED,
//	COLOR_BLUE,
//	COLOR_GREEN,
//};
//
//int main()
//{
//	using namespace std;
//
//	Color paint = COLOR_BLACK;
//	int house(COLOR_BLUE);
//	int apple{ COLOR_RED };
//
//	cout << paint << " " << COLOR_BLACK << endl;
//
//}

//#include<iostream>
//#include<typeinfo>
//
//enum Color  //Color�� Ÿ���� �̸�!
//{
//	COLOR_BLACK = -3,  // ���⸦ �������� �Ʒ����� ���������� ����
//	COLOR_RED,
//	COLOR_BLUE = 5,
//	COLOR_GREEN = 5,
//};
//
//int main()
//{
//	using namespace std;
//
//	if (COLOR_BLUE == COLOR_GREEN)
//	{
//		cout << "Equal" << endl;
//	}
//}

//#include<iostream>
//#include<typeinfo>
//
//enum Color
//{
//	COLOR_BLACK,
//	COLOR_RED,
//	COLOR_BLUE,
//	COLOR_GREEN,
//};
//
//int main()
//{
//	using namespace std;
//
//	int color_id = COLOR_RED;      //�ȴ�!
//
//	Color my_color = 3;            //�ȵȴ�.
//
//	cout << color_id << endl;
//}

#include<iostream>
#include<typeinfo>

enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

int main()
{
	using namespace std;

	Color my_color;

	//cin >> my_color;   // �ȵȴ�!!
	
	int in_number;
	cin >> in_number;
	if (in_number == COLOR_BLACK) my_color = COLOR_BLACK;
	//...

	cout << my_color << endl;
}