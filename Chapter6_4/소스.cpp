#include<iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length); // 출력이 반복되서 따로 함수로 빼줌

	int temp;

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (array[i] >= array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			else continue;
		}
	}

	printArray(array, length);
}