//#include<iostream>
//#include<vector>
//#include<cstdint>
//
//int main()
//{
//	typedef double distance_t;
//
//	double		my_distance;
//	distance_t	home2work;
//	distance_t	home2school;
//
//	return 0;
//}

#include<iostream>
#include<vector>

int main()
{
	using namespace std;

	//아무튼 string과 int의 pair가 vector로 존재한다..
	vector<pair<string, int>> pairlist1;
	vector<pair<string, int>> pairlist2;
	vector<pair<string, int>> pairlist3;
	// ...

	// 이런 경우도
	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist11;
	pairlist_t pairlist22;

	// 이렇게도 사용이 가능하다!
	using parilist_t = vector<pair<string, int>>;
}