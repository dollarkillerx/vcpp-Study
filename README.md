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
### 字符数组 [demo1/test10.cpp]
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

	char srChar[20] = "hello world";  // 多出的都是'\0'
	for (int i =0;i<getArrayLen(srChar);i++)
	{
		cout << srChar[i] << endl;
	}
	cout << getArrayLen(srChar) << endl;
	char stc2[] = "钉钉我是你爸爸!!!";  // 动态设置长度  末尾是'\0'
	cout << stc2 << endl;
```
注意结束符
```
	char szBuf[10] = { 'c','c','t','r','y','p','x','p','m','.' }; // 当没有结束符 时可能输出其他的东西
	cout << szBuf << endl;

	char szBuf2[11] = { 'c','c','t','r','y','p','x','p','m','.','\0'}; // 当没有结束符 时可能输出其他的东西
	cout << szBuf2 << endl;
```
小测试  遍历数组 "Hello,github,my name is 你大爷,what is your name?"
把其中i替换为@并 统计替换个数
```
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
```
### 字符数组处理 [demo1/test11.cpp]
- strcat_s `strcat_s(a,b);` 字符串拼接 b往a的尾巴添加  需保证a足够大 不然会报错
- strcpy_s `strcpy_s(a, b);` 字符串拷贝   参数2中的str 拷贝到参数1的str中
- strcmp `strcmp(a, b);` 字符串比较 相等返回0
- strlen 字符串长度 
小试牛刀: 不使用系统提供的strcat函数 自己实现这个

### 地址与指针 [demo1/test12.cpp]
基类型* 指针变量名称;
```
int* p;
int *p; 都可以
```

```
	// &ch 去ch的内存地址(内存位置的门牌号)
	// *ch 取值  (取内存中实际存储的值)
	// char* p 指针 用来存储 变量的地址 (相当于名片 存变量家给位置)

	void tp(int* a)
	{
		cout << a << endl; // 打印门牌号
		cout << *a << endl; // 打印里面住的什么人
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
数组名字 就是数组的首地址
```
	int a[100] = { 0 };
	int* pa = &a[0];
	cout << &a << endl;
	cout << a << endl;  // 这个指针是const   (int const* a)
	cout << &a[0] << endl;

	int num[100] = { 1,2,3 };
	int* pnum = &num[0];
	cout << "num[1]: " << *(pnum + 1) << endl;
	// 数组是连续开辟的内存空间
```
指针遍历数组
```
	int a[] = { 1,2,3,4,5,6,7,8,9,10,100 };
	int* pa = a;
	for (int idx=0;idx<arrayLen(a);idx++)
	{
		cout << *(pa + idx) << endl;
	}
```
小试牛刀: `a123x456_17960?302ab5876` 将当中的number放入一个新的数组中

### 结构体 地址与指针 [demo1/test13.cpp]
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
	student a; // 未初始化化为 随机的值
	a.age = 18;
	a.name = "你大爷";
	a.id = 1215648748486;
	a.sex = 'm';
	student b{
		"sdsd",
	};
	cout << a.name << endl;
	return 0;
}

	// 结构体数组
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

	// 结构体指针
	void changeAge(student* st,int age)
	{
		//(*st).age = age;
		st->age = age;
	}
```
### 枚举 & 别名 [demo1/test14.cpp]
```
enum sex
{
	man,
	wman
};
typedef int c;
```

### 引用 new & delete [demo1/test15.cpp]  申请内存  释放内存
cpp 建议多用引用少用指针 
1. 引用不能单独存在，必须寄生一个宿主里面
2.不能建立引用的数组
3.可以建立引用的引用   可以建立引用的指针
```
	int a = 5;
	int& b = a; // 此为引用
	int* p = &a;
	cout << a << endl;
	cout << b << endl; 
	cout << p << endl;
	// 紧跟在数据类型后的&为 引用声明符号  其他情况都可能是取地址符号
	cout << &a << endl;
	cout << &b << endl;
	引用就相当于这个变量的别名


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
new delete 动态分配内存
```
student* tx3()
{
	return new student{  // 开辟内存
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
	delete tx; // 删除变量

	int* pll = new int[10];
	pll[0] = 2;
	pll[1] = 3;

	cout << "In Array len: "<< getArrayLength(pll) << endl;
	for (int i=0;i<2;i++)
	{
		cout << *(pll + i) << endl;
	}
	delete[] pll; // 删除数组  释放内存
	return 0;
}

```

### 面向对象篇章
```
	Student a = Student("钉钉我是你爸爸",123456,88,'m');
	cout << "name: " << a.getName() << endl;
	cout << "age: " << a.getAge() << endl;

	cout << "####  two  ####" << endl;
	Student* b = new Student("钉钉我是你的爸爸2	",88888,88,'m');
	cout << b->getName() << endl;
	cout << b->getAge() << endl;

	#define MAX_NUM(x,y) (x > y ? x : y)  // 宏
```
#### 成员访问限定 和Java一样
- public
- private
- protected

备注:
```
默认情况下，在类中直接定义/实现的函数，C++会自动将其作为inline内联函数处理

在类外定义函数c++默认会当作普通的成员函数
```
#### 多文件分离类
将类的声明放入到.h头文件
将类的实现放入.cpp文件
