#include <iostream>
using namespace std;
template <class T>
int getArrayLen(T& array);
void test1();
void test2();
void test3();
void test4();
int test10()
{
	//test1();
	//test2();
	//test3();
	test4();
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

void test2()
{
	char srChar[20] = "hello world";
	for (int i =0;i<getArrayLen(srChar);i++)
	{
		cout << srChar[i] << endl;
	}
	cout << getArrayLen(srChar) << endl;
	char stc2[] = "我是你爸爸!!!";
	cout << stc2 << endl;
}

void test3()
{
	char szBuf[10] = { 'c','c','t','r','y','p','x','p','m','.' }; // 当没有结束符 时可能输出其他的东西
	cout << szBuf << endl;

	char szBuf2[11] = { 'c','c','t','r','y','p','x','p','m','.','\0'}; // 当没有结束符 时可能输出其他的东西
	cout << szBuf2 << endl;
}

void test4()
{
	char szBuf[100] = "Hello,github,my name is 你大爷,what is your name?";
	int a = 0;
	for (int i=0;i<100;i++)
	{
		if (szBuf[i] == 'i')
		{
			szBuf[i] = '@';
			a++;
		}
		if (szBuf[i] == '\0')
		{
			break;;
		}
	}
	cout << szBuf << endl;
	cout << a << endl;
}
