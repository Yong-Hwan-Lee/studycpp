#include <iostream>
#pragma warning(disable:4996) // C4996 ������ ����
using namespace std;


class Myclass
{
private:
	char id;
	int age;
	char name[10];
public:
	void set(char aid, int aage, const char*aname);
	void get();
};

void Myclass::set(char aid, int aage, const char* aname)
{
	id = aid;
	age = aage;
	strcpy(name, aname);
	//name = aname;
};

void Myclass::get()
{
	cout << "�й�: " << id << endl;
	cout << "����: " << age << endl;
	cout << "�̸�: " << name << endl;

};

int main(void)
{
	Myclass s;
	s.set('2', 27, "yonghwan");
	s.get();

	return 0;
}