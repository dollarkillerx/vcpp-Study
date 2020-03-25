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
### �ַ����� [demo1/test10.cpp]
```
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

	char srChar[20] = "hello world";  // ����Ķ���'\0'
	for (int i =0;i<getArrayLen(srChar);i++)
	{
		cout << srChar[i] << endl;
	}
	cout << getArrayLen(srChar) << endl;
	char stc2[] = "����������ְ�!!!";  // ��̬���ó���  ĩβ��'\0'
	cout << stc2 << endl;
```
ע�������
```
	char szBuf[10] = { 'c','c','t','r','y','p','x','p','m','.' }; // ��û�н����� ʱ������������Ķ���
	cout << szBuf << endl;

	char szBuf2[11] = { 'c','c','t','r','y','p','x','p','m','.','\0'}; // ��û�н����� ʱ������������Ķ���
	cout << szBuf2 << endl;
```
С����  �������� "Hello,github,my name is ���ү,what is your name?"
������i�滻Ϊ@�� ͳ���滻����
```
void test4()
{
	char szBuf[100] = "Hello,github,my name is ���ү,what is your name?";
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
```
### �ַ����鴦�� [demo1/test11.cpp]
- strcat_s `strcat_s(a,b);` �ַ���ƴ�� b��a��β�����  �豣֤a�㹻�� ��Ȼ�ᱨ��
- strcpy_s `strcpy_s(a, b);` �ַ�������   ����2�е�str ����������1��str��
- strcmp `strcmp(a, b);` �ַ����Ƚ� ��ȷ���0
- strlen �ַ������� 
С��ţ��: ��ʹ��ϵͳ�ṩ��strcat���� �Լ�ʵ�����

### ��ַ��ָ�� [demo1/test12.cpp]
������* ָ���������;
```
int* p;
int *p; ������
```

```
	// &ch ȥch���ڴ��ַ(�ڴ�λ�õ����ƺ�)
	// *ch ȡֵ  (ȡ�ڴ���ʵ�ʴ洢��ֵ)
	// char* p ָ�� �����洢 �����ĵ�ַ (�൱����Ƭ ������Ҹ�λ��)

	void tp(int* a)
	{
		cout << a << endl; // ��ӡ���ƺ�
		cout << *a << endl; // ��ӡ����ס��ʲô��
	}

	int a = 46;
	tp(&a);

	int a = 10;
	int* b = &a;
	*b = 20;
	cout << a << endl;  // 20
	cout << *b << endl; // 20
	a = 25;
	cout << *b << endl; // 25
```
�������� ����������׵�ַ
```
	int a[100] = { 0 };
	int* pa = &a[0];
	cout << &a << endl;
	cout << a << endl;  // ���ָ����const   (int const* a)
	cout << &a[0] << endl;

	int num[100] = { 1,2,3 };
	int* pnum = &num[0];
	cout << "num[1]: " << *(pnum + 1) << endl;
	// �������������ٵ��ڴ�ռ�
```
ָ���������
```
	int a[] = { 1,2,3,4,5,6,7,8,9,10,100 };
	int* pa = a;
	for (int idx=0;idx<arrayLen(a);idx++)
	{
		cout << *(pa + idx) << endl;
	}
```
С��ţ��: `a123x456_17960?302ab5876` �����е�number����һ���µ�������

### �ṹ�� ��ַ��ָ�� [demo1/test13.cpp]
```
struct student
{
	string name;
	int id;
	int age;
	char sex;
};

int main()
{
	student a; // δ��ʼ����Ϊ �����ֵ
	a.age = 18;
	a.name = "���ү";
	a.id = 1215648748486;
	a.sex = 'm';
	student b{
		"sdsd",
	};
	cout << a.name << endl;
	return 0;
}

	// �ṹ������
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

	// �ṹ��ָ��
	void changeAge(student* st,int age)
	{
		//(*st).age = age;
		st->age = age;
	}
```
### ö�� & ���� [demo1/test14.cpp]
```
enum sex
{
	man,
	wman
};
typedef int c;
```

### ���� new & delete [demo1/test15.cpp]  �����ڴ�  �ͷ��ڴ�
cpp ���������������ָ�� 
1. ���ò��ܵ������ڣ��������һ����������
2.���ܽ������õ�����
3.���Խ������õ�����   ���Խ������õ�ָ��
```
	int a = 5;
	int& b = a; // ��Ϊ����
	int* p = &a;
	cout << a << endl;
	cout << b << endl; 
	cout << p << endl;
	// �������������ͺ��&Ϊ ������������  ���������������ȡ��ַ����
	cout << &a << endl;
	cout << &b << endl;
	���þ��൱����������ı���


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
```
new delete ��̬�����ڴ�
```
student* tx3()
{
	return new student{  // �����ڴ�
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
	delete tx; // ɾ������

	int* pll = new int[10];
	pll[0] = 2;
	pll[1] = 3;

	cout << "In Array len: "<< getArrayLength(pll) << endl;
	for (int i=0;i<2;i++)
	{
		cout << *(pll + i) << endl;
	}
	delete[] pll; // ɾ������  �ͷ��ڴ�
	return 0;
}

```

### �������ƪ��
```
	Student a = Student("����������ְ�",123456,88,'m');
	cout << "name: " << a.getName() << endl;
	cout << "age: " << a.getAge() << endl;

	cout << "####  two  ####" << endl;
	Student* b = new Student("����������İְ�2	",88888,88,'m');
	cout << b->getName() << endl;
	cout << b->getAge() << endl;

	#define MAX_NUM(x,y) (x > y ? x : y)  // ��
```
#### ��Ա�����޶� ��Javaһ��
- public
- private
- protected

��ע:
```
Ĭ������£�������ֱ�Ӷ���/ʵ�ֵĺ�����C++���Զ�������Ϊinline������������

�����ⶨ�庯��c++Ĭ�ϻᵱ����ͨ�ĳ�Ա����
```
#### ���ļ�������
������������뵽.hͷ�ļ�
�����ʵ�ַ���.cpp�ļ�
