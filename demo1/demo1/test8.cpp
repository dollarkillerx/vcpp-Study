#include <cstdio>
#include <iostream>
#include "h1.h"
using namespace std;
void test1(int a)
{
	
	while (a < 100)
	{
		printf("while: %d \n",a);
		a++;
	}
}

void test2(int a)
{
	for (;a<100;a++)
	{
		printf("for: %d \n", a);
	}
}

void test2(int a,int b)
{
	for (;a<b;a++)
	{
		printf("for: 2 x %d   \n", a);
	}
}
void test3(int a = 16,int b = 20)
{
	for (; a < b; a++)
	{
		printf("for: %d \n", a);
	}
}

void test5();

int test8()
{
	test1(50);
	test2(50);
	printf("extern : %d \n", ACID);
	test5();
	HelloWorld();
	return 0;
}

void test5()
{
	// 这个是前置声明
	cout << "这个是前置声明";
}
