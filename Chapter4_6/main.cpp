//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	cout << "Your name? : ";
//	string name;
//	cin >> name;
//
//	cout << "Your age ? : ";
//	string age;
//	cin >> age;
//
//	cout << name << " " << age << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	cout << "Your name? : ";
//	string name;
//	getline(cin, name);
//
//	cout << "Your age? : ";
//	string age;
//	getline(cin, age);
//
//	cout << name << " " << age << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	cout << "Your age? : ";
//	int age;
//	cin >> age;
//
//	cout << "Your name? : ";
//	string name;
//	getline(cin, name);
//
//	cout << name << " " << age << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include<limits>
//
//using namespace std;
//
//int main()
//{
//	cout << "Your age? : ";
//	int age;
//	cin >> age;
//
//	// \n�� �� �� ����, streamsize��ŭ�� ���ڸ� �ؾ������! 
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//	cout << "Your name? : ";
//	string name;
//	getline(cin, name);
//
//	cout << name << " " << age << endl;
//
//	return 0;
//}

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a("Hello, ");
	string b("World ");
	string hw = a + b;  // append��� �θ���!

	hw += "I'm good";

	cout << hw << endl;

	return 0;
}