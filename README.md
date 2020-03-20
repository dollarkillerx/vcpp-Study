# vcpp-Study
vc++Study
### Demo1  [demo1/helloworld.cpp]
#### Include
```
include <stdio.h>  // 系统的东西
include "user.h"     // 我们编写的东西
using namespace std;   //  引入命名空间
```
#### demo1
```
#include <iostream>
using namespace std;

int main()
{
	//std::cout << "hello world \n";
	cout << "hello world \n";
	cout << "2 + 3 = " << 2 + 3 << endl; // endl 结尾换行

	for (int idx=0;idx <= 10000;idx++){}
	return 0;
}
```
### 数据类型 [demo1/test2.cpp]
- 基本类型
	- 整型
		- 短整型(short int)
		- 整型(int)
		- 长整型(long int)
	- 字符形(char)
	- 浮点型
		- 单精度(float)
		- 双精度(double)
		- 长双精度(long double)
	- 布尔型(bool)
- 派生类型
	- 指针(*)
	- 枚举类型(enum)
	- 数组类型([])
	- 结构体类型(struct)
	- 共用体类型(union)
	- 类类型(class)
- 空类型(void)

### 变量 [demo1/test3.cpp]
```
#define
const
cpp 兼容 c  #define 还有内存占用的区别
```

### 输出输出 [demo1/test4.cpp]
```
	int a,b;
	//cin >> a >> b;  // 获取用户输入  
	cin >> a;
	cin >> b;
	cout << a << endl;
	cout << b << endl;
	cout << b << a << endl;
```
### 关系运算等 [demo1/test5.cpp]

### C++ 存储类 [demo1/test6.cpp]
- auto // 这个被弃用了
- register  // 这个存储在CPU寄存器里面
- static    // 这个保证局部变量不被销毁
- extern   // 这个对全局程序暴露
- mutable
- thread_local (C++11)

### 枚举 & switch [demo1/test7.cpp]
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
void a(int a,int b) {} // 函数重载
void b(int a;int b=15){}

void test5();
void test5()
{
	// 这个是前置声明
	cout << "这个是前置声明";
}

extern  void HelloWorld();  // 全局声明


 每次都要extern 是不是非常讨厌啊
 可以把extern 放入.h文件中后期调用直接导入.h文件即可
```
### 数组和一维数组 [demo1/test9.cpp]
```
// 获取array length
template <class T>
int getArrayLen(T& array)
{
	return (sizeof(array) / sizeof(array[0]) );
}

// 声明再写入
int apple[100];
for (int i = 0; i < 100; i++)
{
	apple[i] = i;
}
for (int i = 0; i < 100; i++)
{
	cout << apple[i] << endl; ;
}
// 声明并写入
int apple2[] = { 100,101,102,103,104,105 };
for (int i = 0; i < getArrayLen(apple2);i++)
{
	cout << apple[i] << endl;
}
return 0;
// 定义确定大小
```
### 字符数组

