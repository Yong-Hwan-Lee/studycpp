#include <iostream>
#pragma warning(disable:4996) // C4996 ������ ����
using namespace std;

class Human {
private:
	char * name;
	int id;
	int age;
public:
	Human(const char* aname, int aid, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() {
		delete[] name;
	}
	void getData() {
		cout << "�̸�: " << name << "\t" << " �й�: " << id << "\t" << "����: " << age << endl;
	}
};

int main()
{
	Human h("ȫ�浿", 1, 30);
	h.getData();

	/*
	Human h;
	h.setData("ȫ�浿", 1, 30);
	h.getData();
	*/


	return 0;

};