//#include<iostream>
//
//using namespace std;
//
//void countDown(int count)
//{
//	cout << count << endl;
//	if (count == -5) return;
//	countDown(count - 1);
//	
//}
//
//int main()
//{
//	countDown(5);
//
//	return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int sumTo(int sumto)
//{
//	if (sumto <= 0)
//	{
//		cout << sumto << endl;
//		return 0;
//	}
//	else if (sumto <= 1)
//	{
//		cout << sumto << endl;
//		return 1;
//	}
//	else
//	{
//		cout << sumto << '\t';
//		cout << sumto - 1 << " + " << sumto << endl;
//		return sumTo(sumto - 1) + sumto;
//	}
//		
//}
//
//int main()
//{
//	cout << sumTo(10) << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;

int fibonacci(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	else
	{
		return fibonacci(n - 2) + fibonacci(n - 1);
	}
	
}

int main()
{
	for(int i = 1; i < 20; i++)
		cout << "fibonacci[" << i << "] = " << fibonacci(i) << endl;
}