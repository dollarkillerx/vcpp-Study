#include <iostream>
using namespace std;
int test6()
{
	// auto 已经被删除了
	/*auto f = 3.14;
	auto s("hello");
	auto z = new auto(9);*/
	// auto x1 = 5, x2 = 5.0, x3 = 'r';  // 错误，必须是初始化为同一类型

	register int  miles; // 在 cpu寄存器中
	miles = 1231213;
	std::cout << miles << endl;

	// static 静态  不会每次载入和退出销毁

	// extern 对所有全局程序可见
	return 0;
}