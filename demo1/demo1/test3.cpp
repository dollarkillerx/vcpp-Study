#include <iostream>
using namespace std;
int test3()
{
	const int a = 16; // const 定义常量
	double b = 13.2;
	cout << a/b << endl;

	int c = 1;
	int c1 = ++c;
	c = 1;
	int c2 = c++;
	cout << c1 << endl;
	cout << c2 << endl;
	return 0;
}