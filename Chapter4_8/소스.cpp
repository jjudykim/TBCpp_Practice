//#include<iostream>
//
//int main()
//{
//	using namespace std;
//
//	enum class Color
//	{
//		RED,
//		BLUE
//	};
//
//	enum class Fruit
//	{
//		BANANA,
//		APPLE
//	};
//
//	Color color = Color::RED;
//	Fruit fruit = Fruit::BANANA;
//
//	if (color == fruit)
//		cout << "Color is fruit? " << endl;
//
//	// 영역을 제한했기 때문에 둘의 비교가 허가되지 않는다!
//}

#include<iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;

	if (color1 == color2)
		cout << "same color" << endl;
	if (color1 == Color::RED)
		cout << "same color" << endl;
}