#include<iostream>
#include<cassert>

int main()
{
	const int x = 10;

	assert(x == 4);                            // ���� X!
	static_assert(x == 4, "x should be 4");    // ���� X!
}