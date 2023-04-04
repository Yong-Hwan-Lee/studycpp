#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abirthday)
		: birthday(abirthday)
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
	}
	void ShowPerson() {
		cout << "name: " << name << endl;
		cout << "birthday: " << birthday << endl;
	}
	Person(const Person& ref)
		:birthday(ref.birthday) 
	{
		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);
	}
	Person& operator=(Person &ref)
	{
		delete[]name;
		birthday = ref.birthday;
		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);
		return *this;
	}
	~Person()
	{
		delete[]name;
	}
};


int main()
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("강감찬", 20001201);
	p4 = p1;
	p4.ShowPerson();

	return 0;
}