#include <iostream>
using namespace std;

enum sex
{
	man,
	wman
};

void tc1_c(sex s)
{
	switch (s)
	{
	case man:
		{
		cout << "wm" << endl;
		break;
		}
	case wman:
		{
		cout << "wman" << endl;
		break;
		}
	}
}

typedef int c;

//void kk(c cs)
//{
//	switch (cs)
//	{
//	case 1:
//		{
//			count
//		}
//	}
//}

void tc1()
{
	tc1_c(man);
}

int test14()
{
	tc1();
	return 0;
}