#include <iostream>
using namespace std;

int test5()
{
	int a, b;
	std::cin >>a >> b;
	if (a > b)
	{
		std::cout << "A>b";
	}else
	{
		std::cout << "A < b";
	}

	// 三元表达式
	bool c = a > b ? true : false;
	std::cout << c;
	return 0;
}