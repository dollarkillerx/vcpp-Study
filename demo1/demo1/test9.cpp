#include <iostream>
using namespace std;

template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]) );
}

int test9()
{
	// 声明再写入
	int apple[100];
	for (int i = 0; i < 100; i++)
	{
		apple[i] = i;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << apple[i] << endl; ;
	}
	// 声明并写入
	int apple2[] = { 100,101,102,103,104,105 };
	for (int i = 0; i < getArrayLen(apple2);i++)
	{
		cout << apple[i] << endl;
	}
	return 0;
	// 定义确定大小
}