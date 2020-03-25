#include <iostream>
using namespace std;

void arrayTest2(char* msg)
{
	cout << msg << endl;
}

class Student
{
	string name;
	int num;
	int age;
	char sex;
public:
	Student() {}
	Student(string name, int num, int age, char sex)
	{
		this->name = name;
		this->age = age;
		this->num = num;
		this->sex = sex;
	}
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
};

class Humanity
{
	string name;
	int age;
public:
	Humanity(){};
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
};

#define MAX_NUM(x,y) (x > y ? x : y)  // ºê

int main()
{
	//char a[] = "¶¤¶¤ÎÒÊÇÄã°Ö°Ö";
	//arrayTest2(a);


	Student a = Student("¶¤¶¤ÎÒÊÇÄã°Ö°Ö", 123456, 88, 'm');
	cout << "name: " << a.getName() << endl;
	cout << "age: " << a.getAge() << endl;

	cout << "####  two  ####" << endl;
	Student* b = new Student("¶¤¶¤ÎÒÊÇÄãµÄ°Ö°Ö2	", 88888, 88, 'm');
	cout << b->getName() << endl;
	cout << b->getAge() << endl;

	cout << "###########################" << endl;
	Humanity* hum = new Humanity();
	string name;
	int age;

	cin >> name;
	
	cin >> age;
	hum->setAge(age);
	hum->setName(name);
	cout << "Name: " << hum->getName() << endl;
	cout << "Age: " << hum->getAge() << endl;
	
	int c = 16;
	int d = 22;
	cout << MAX_NUM(c, d) << endl;
	delete b;
	delete hum;
	return 0;
}