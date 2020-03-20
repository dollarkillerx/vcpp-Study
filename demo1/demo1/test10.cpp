#include <iostream>
using namespace std;
template <class T>
int getArrayLen(T& array);
void test1();
void test2();
int main()
{
	return 0;
}


void test1()
{
	char szChar[10];
	szChar[0] = 'A';
	szChar[1] = 'B';
	szChar[2] = 'C';
	szChar[3] = 'D';
	szChar[4] = 'E';
	szChar[5] = 'F';
	for (int i = 0; i < getArrayLen(szChar); i++)
	{
		cout << szChar[i] << endl;
	}
}

template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]));
}