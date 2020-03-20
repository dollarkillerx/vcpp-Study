#include <iostream>
using namespace std;
#define PRICE 30 // 定义价格 为 30
int test2()
{
	cout << "张三要去买苹果 \n";
	int mun = 5;
	cout << "张三要买" << mun << "斤 苹果 每斤苹果的价格为: " << PRICE << endl;
	cout << "张三总共要付: " << mun * PRICE << " CNY \n";
	return 0;
}