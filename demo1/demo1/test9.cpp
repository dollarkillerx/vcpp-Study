#include <iostream>
using namespace std;

template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]) );
}

int test9()
{
	// ������д��
	int apple[100];
	for (int i = 0; i < 100; i++)
	{
		apple[i] = i;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << apple[i] << endl; ;
	}
	// ������д��
	int apple2[] = { 100,101,102,103,104,105 };
	for (int i = 0; i < getArrayLen(apple2);i++)
	{
		cout << apple[i] << endl;
	}
	return 0;
	// ����ȷ����С
}