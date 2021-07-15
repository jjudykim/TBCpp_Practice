#include<iostream>

using namespace std;

void func_1(int x = 1, int y = 1, int z = 2) {} // O 가능. func_1();로 호출이 가능하며 1, 1, 2로 초기화됨

void func_2(int x, int y, int z = 2) {} // O 가능. func_(3, 4);로 호출이 가능하며 나머지 매개변수는 2로 초기화됨

void func_3(int x = 1, int y, int z) {} // X 불가능. z가 디폴트 값이 설정되어 있지 않기 때문

int main()
{

}