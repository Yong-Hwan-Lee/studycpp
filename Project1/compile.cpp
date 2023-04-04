#include <iostream>
#pragma warning(disable:4996) // C4996 에러를 무시
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
	cout << "학번: " << id << endl;
	cout << "나이: " << age << endl;
	cout << "이름: " << name << endl;

};

int main(void)
{
	Myclass s;
	s.set('2', 27, "yonghwan");
	s.get();

	return 0;
}