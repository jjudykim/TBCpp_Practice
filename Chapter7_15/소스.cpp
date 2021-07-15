#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
	for (int count = 0; count < argc; count++)
	{
		string argv_single = argv[count];
		if (count == 1)
		{
			int input_number = stoi(argv_single);  //argv[1]일 때 문자열 인수를 정수로 변환
			cout << input_number + 1 << endl;
		}
		else
			cout << argv_single << endl;
	}
	return 0;
}