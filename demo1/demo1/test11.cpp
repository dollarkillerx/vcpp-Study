#include <cstring>
#include <iostream>
using namespace std;
// strcat �ַ�������  ������2str ���ӵ�����1str
void test()
{
	char a[50] = "hello"; // Ҫ��֤��һ���㹻��
	char b[] = "world";
	strcat_s(a,b);  // strcat_s��VS2005���Ժ������ľ��и�ǿ"��ȫ��"��CRT������
	cout << a << endl;
}
void test11_1()
{
	char a[100] = "";
	char b[] = "�����ҵ���ְ�!!!";
	strcpy_s(a, b);
	cout << a << endl;
}

void test11_2()
{
	char a[] = "�����ҵ���ְ�!!!";
	char b[] = "�����ҵ���ְ�!!!";
	int c = strcmp(a, b);
	cout << c << endl;

	char a1[] = "�����ҵ���ְ�!!!";
	char b1[] = "�����ҵ���ְ�!";
	int c1 = strcmp(a1, b1);
	cout << c1 << endl;
}

void test11_3()
{
	char a[100] = "����������ְ�";
	int c = strlen(a);  // ��ȡ��ʵ���ڵ� ��������
	cout << c << endl;
	for (int b=0;b<c;b++)
	{
		cout << a[b] << endl;
	}
	cout << a << endl;
	cout << "size of: " << sizeof(a) << endl; // size of Ϊ������
}

void strcat_plus(char const* a,char const* b)
{
	if (sizeof(a) < (strlen(a) + strlen(b)))
	{
		throw "size of err";
	}
	
	
}

int test11()
{
	// test();
	// test11_1();
	//test11_2();
	//test11_3();
	char a[255] = "���ү��";
	char b[] = " �Ҳ������ү";
	strcat_plus(a, b);
	cout << "write" << endl;
	return 0;
}