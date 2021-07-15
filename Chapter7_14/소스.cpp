#include<iostream>
#include<cassert>

int main()
{
	const int x = 10;

	assert(x == 4);                            // 문제 X!
	static_assert(x == 4, "x should be 4");    // 문제 X!
}