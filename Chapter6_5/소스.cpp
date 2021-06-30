//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int num_rows = 3;
//	const int num_columns = 5;
//
//	for (int row = 0; row < num_rows; ++row)
//	{
//		for (int col = 0; col < num_columns; ++col)
//		{
//			cout << '[' << row << ']' << '[' << col << ']' << '\t';
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	const int num_rows = 3;
//	const int num_columns = 5;
//
//	int array[num_rows][num_columns] //C++ 11 이후에만 가능!
//	{
//			{1, 2, 3, 4, 5},       // row 0
//			{6, 7, 8, 9, 10},      // row 1
//			{11, 12, 13, 14, 15}   // row 2
//	};
//
//	for (int row = 0; row < num_rows; ++row)
//	{
//		for (int col = 0; col < num_columns; ++col)
//		{
//			cout << '[' << row << ']' << '[' << col << ']' << '\t';
//			cout << array[row][col] << '\t';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//
//// 출력
//// [0][0]  [0][1]  [0][2]  [0][3]  [0][4]
//// [1][0]  [1][1]  [1][2]  [1][3]  [1][4]
//// [2][0]  [2][1]  [2][2]  [2][3]  [2][4]

#include<iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	int array[num_rows][num_columns]
	{
		{1, 2, 3, 4, 5},        //row0
		{6, 7, 8, 9, 10},       //row1
		{11, 12, 13, 14, 15}    //row2
	};

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
			cout << (int)&array[row][col] << '\t';
		cout << endl;
	}
}