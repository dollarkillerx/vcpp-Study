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
	Humanity();
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


int main()
{
	//char a[] = "����������ְ�";
	//arrayTest2(a);


	Student a = Student("����������ְ�",123456,88,'m');
	cout << "name: " << a.getName() << endl;
	cout << "age: " << a.getAge() << endl;

	cout << "####  two  ####" << endl;
	Student* b = new Student("����������İְ�2	",88888,88,'m');
	cout << b->getName() << endl;
	cout << b->getAge() << endl;

	cout << "###########################" << endl;
	Humanity* hum = new Humanity();
	string name;
	int age;

	cin >> name;
	
	cin >> age;

	return 0;
}