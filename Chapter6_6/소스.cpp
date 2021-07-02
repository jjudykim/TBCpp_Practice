//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char myString[] = "string";
//
//	for (int i = 0; i < 7; i++)
//	{
//		cout << (int)myString[i] << endl;
//	}
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char myString[255];
//
//	cin >> myString;
//
//	cout << myString;
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char myString[255];
//
//	cin >> myString;
//
//	myString[0] = 'A';
//
//	myString[3] = '\0';
//
//	cout << myString;
//
//	return 0;
//}
//
//// 입력
//// Hello, World!
//
//
//// 출력
//// Hello,

#include<iostream>

using namespace std;

int main()
{

	char myString[255];

	cin.getline(myString, 255);

	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0') break;
		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}

	return 0;
}

// 입력 
// jack hello