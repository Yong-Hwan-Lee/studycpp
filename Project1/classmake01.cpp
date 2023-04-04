#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Person {
private:
	char name[30];
	int birthday;
public:
	Person(const char *aname, int abirthday)
	{
		strcpy(name, aname);
		birthday = abirthday;
	}
	void ShowPerson() {
		cout << "name :" << name << endl;
		cout << "birthday : " << birthday << endl;
	}
};

int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();
	
	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();
	return 0;
}