#include <iostream>
using namespace std;

void tp(int* a)
{
	cout << a << endl; // 打印门牌号
	cout << *a << endl; // 打印里面住的什么人
}

void a()
{
	// char ch = 'a';

// &ch 去ch的内存地址(内存位置的门牌号)
// *ch 取值  (取内存中实际存储的值)
// char* p 指针 用来存储 变量的地址 (相当于名片 存变量家给位置)

// std::cout << &ch << endl;
// std::cout << ch << endl;
	int a = 46;
	tp(&a);
}

void b()
{
	int a = 10;
	int* b = &a;
	int** c = &b;
	int*** d = &c;
	cout << d << endl;
	cout << ***d << endl;
}

void c()
{
	int a = 10;
	int* b = &a;
	*b = 20;
	cout << a << endl;  // 20
	cout << *b << endl; // 20
	a = 25;
	cout << *b << endl; // 25
}

void swip(int* a ,int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void d()
{
	int a = 10;
	int b = 12;
	swip(&a,& b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}

template <class T>
int arrayLen(T& array)
{
	return ( sizeof(array) / sizeof(array[0]) );
}

void e()
{
	int num[100] = { 0 };
	int* pnum[100] = { 0 };
	for (int idx = 0; idx < arrayLen(num);idx++)
	{
		pnum[idx] = &num[idx];
	}
	cout << pnum << endl;
}

void f()
{
	int a[100] = { 0 };
	int* pa = &a[0];
	cout << &a << endl;
	cout << &a[0] << endl;
}

void w()
{
	int num[100] = { 1,2,3 };
	int* pnum = &num[0];
	cout << "num[1]: " << *(pnum + 1) << endl;
	// 数组是连续开辟的内存空间
}

void g()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,100 };
	int* pa = a;
	for (int idx=0;idx<arrayLen(a);idx++)
	{
		cout << *(pa + idx) << endl;
	}
}


void swip_char(char *a,char const* b)
{
	int alen = 15;
	int blen = 15;
	cout << "alen: " << alen << endl;
	cout << "blen: " << blen << endl;

	for (int a1=0;a1<blen;a1++)
	{
		for (int a2=0;a2<100;a2++)
		{
			if (*(a + a2)=='\0')
			{
				*(a + a2) = *(b + a1);
				break;
			}
		}
	}
}

void j()
{
	char a[100] = "11wosinibaba22";
	char b[] = "33wosinidaye44";
	swip_char(a, b);
	cout << a << endl;
}

void k()
{
	//char text[] = "a123x456_17960?302ab5876";
	//char a[100];
	//cout << arrayLen(text) << endl;
	//char swap[20];
	//bool c = false;
	//for (int i=0;i<arrayLen(text);i++)
	//{
	//	if (text[i])
	//}
}

int test12()
{
	//a();
	//b();
	//c();
	//d();
	// e();
	//f();
	//w();
	//g();
	//j();
	k();
	return 0;
}

