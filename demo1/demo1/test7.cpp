#include <iostream>
using namespace std;

extern  void HelloWorld();
extern int ACID = 12;
enum my_enum
{
	A,
	B,
};



void test(my_enum z)
{
	switch (z)
	{
	case  A:
		{
			std::cout << "A \n";
			break;
		}
	case B:
		{
			std::cout << "B\n";
			break;
		}
	}
}

int test7()
{
	test(A);
	return 0;
}

void HelloWorld()
{
	cout << "HelloWorld \n";
}