#include <cstring>
#include <iostream>
using namespace std;
// strcat 字符串链接  将参数2str 连接到参数1str
void test()
{
	char a[50] = "hello"; // 要保证第一个足够大
	char b[] = "world";
	strcat_s(a,b);  // strcat_s是VS2005及以后新增的具有更强"安全性"的CRT函数。
	cout << a << endl;
}
void test11_1()
{
	char a[100] = "";
	char b[] = "钉钉我的你爸爸!!!";
	strcpy_s(a, b);
	cout << a << endl;
}

void test11_2()
{
	char a[] = "钉钉我的你爸爸!!!";
	char b[] = "钉钉我的你爸爸!!!";
	int c = strcmp(a, b);
	cout << c << endl;

	char a1[] = "钉钉我的你爸爸!!!";
	char b1[] = "钉钉我的你爸爸!";
	int c1 = strcmp(a1, b1);
	cout << c1 << endl;
}

void test11_3()
{
	char a[100] = "钉钉我是你爸爸";
	int c = strlen(a);  // 获取真实存在的 不包含空
	cout << c << endl;
	for (int b=0;b<c;b++)
	{
		cout << a[b] << endl;
	}
	cout << a << endl;
	cout << "size of: " << sizeof(a) << endl; // size of 为总容量
}

void strcat_plus(char const* a,char const* b)
{
	if (sizeof(a) < (strlen(a) + strlen(b)))
	{
		throw "size of err";
	}
	
	
}

int test11()
{
	// test();
	// test11_1();
	//test11_2();
	//test11_3();
	char a[255] = "你大爷的";
	char b[] = " 我才是你大爷";
	strcat_plus(a, b);
	cout << "write" << endl;
	return 0;
}