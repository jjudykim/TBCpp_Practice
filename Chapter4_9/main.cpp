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

	//�ƹ�ư string�� int�� pair�� vector�� �����Ѵ�..
	vector<pair<string, int>> pairlist1;
	vector<pair<string, int>> pairlist2;
	vector<pair<string, int>> pairlist3;
	// ...

	// �̷� ��쵵
	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist11;
	pairlist_t pairlist22;

	// �̷��Ե� ����� �����ϴ�!
	using parilist_t = vector<pair<string, int>>;
}