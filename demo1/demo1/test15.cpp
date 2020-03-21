#include <iostream>
using namespace std;

void tx1()
{
	int a = 5;
	int& b = a; // 此为引用
	int* p = &a;
	cout << a << endl;
	cout << b << endl; 
	cout << p << endl;
	// 紧跟在数据类型后的&为 引用声明符号  其他情况都可能是取地址符号
	cout << "new \n";
	cout << &a << endl;
	cout << &b << endl;
}

void swapc(int& a,int& b)
{
	int c = a;
	a = b;
	b = c;
}

void tx2()
{
	int a = 12;
	int b = 66;
	swapc(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}

struct student
{
	string name;
	int age;
};

student* tx3()
{
	return new student{
		"dopc",
		18
	};
}

int main()
{
	//tx1();
	//tx2();
	student* tx = tx3();
	cout << tx->age << endl;
	cout << tx->name << endl;
	delete(tx);
	return 0;
}