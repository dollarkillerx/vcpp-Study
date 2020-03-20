# vcpp-Study
vc++Study
### Demo1  [demo1/helloworld.cpp]
#### Include
```
include <stdio.h>  // ϵͳ�Ķ���
include "user.h"     // ���Ǳ�д�Ķ���
using namespace std;   //  ���������ռ�
```
#### demo1
```
#include <iostream>
using namespace std;

int main()
{
	//std::cout << "hello world \n";
	cout << "hello world \n";
	cout << "2 + 3 = " << 2 + 3 << endl; // endl ��β����

	for (int idx=0;idx <= 10000;idx++){}
	return 0;
}
```
### �������� [demo1/test2.cpp]
- ��������
	- ����
		- ������(short int)
		- ����(int)
		- ������(long int)
	- �ַ���(char)
	- ������
		- ������(float)
		- ˫����(double)
		- ��˫����(long double)
	- ������(bool)
- ��������
	- ָ��(*)
	- ö������(enum)
	- ��������([])
	- �ṹ������(struct)
	- ����������(union)
	- ������(class)
- ������(void)

### ���� [demo1/test3.cpp]
```
#define
const
cpp ���� c  #define �����ڴ�ռ�õ�����
```

### ������ [demo1/test4.cpp]
```
	int a,b;
	//cin >> a >> b;  // ��ȡ�û�����  
	cin >> a;
	cin >> b;
	cout << a << endl;
	cout << b << endl;
	cout << b << a << endl;
```
### ��ϵ����� [demo1/test5.cpp]

### C++ �洢�� [demo1/test6.cpp]
- auto // �����������
- register  // ����洢��CPU�Ĵ�������
- static    // �����֤�ֲ�������������
- extern   // �����ȫ�ֳ���¶
- mutable
- thread_local (C++11)

### ö�� & switch [demo1/test7.cpp]
```
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
}
```

### while && for [demo1/test8.cpp]
```
void a() {}
void a(int a,int b) {} // ��������
void b(int a;int b=15){}

void test5();
void test5()
{
	// �����ǰ������
	cout << "�����ǰ������";
}

extern  void HelloWorld();  // ȫ������


 ÿ�ζ�Ҫextern �ǲ��Ƿǳ����ᰡ
 ���԰�extern ����.h�ļ��к��ڵ���ֱ�ӵ���.h�ļ�����
```
### �����һά���� [demo1/test9.cpp]
```
// ��ȡarray length
template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]) );
}

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
```
### �ַ�����

