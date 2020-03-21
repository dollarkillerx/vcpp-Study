#include <iostream>
#include <string>
using namespace std;

struct student
{
	string name;
	int id;
	int age;
	char sex;
};

void t13_1()
{
	student a; // 未初始化化为 随机的值
	a.age = 18;
	a.name = "你大爷";
	a.id = 1215648748486;
	a.sex = 'm';
	student b{
		"sdsd",
	};
	student ac[] = {
		{
			"",
			15,
			18,
			'm',
		},	{
			"",
			15,
			18,
			'm',
		},
	};
	cout << a.name << endl;
}

void changeAge(student* st,int age)
{
	//(*st).age = age;
	st->age = age;
}

void t13_2()
{
	student a = {
		"王大帅",
		1213,
		18,
		'm',
	};
	cout << a.age << endl;
	changeAge(&a, 20);
	cout << a.age << endl;

}

int test13()
{
	//t13_1();
	t13_2();
	return 0;
}