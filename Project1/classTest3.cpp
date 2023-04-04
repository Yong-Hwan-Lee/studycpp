#include <iostream>
#pragma warning(disable:4996) // C4996 에러를 무시
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
		cout << "이름: " << name << "\t" << " 학번: " << id << "\t" << "나이: " << age << endl;
	}
};

int main()
{
	Human h("홍길동", 1, 30);
	h.getData();

	/*
	Human h;
	h.setData("홍길동", 1, 30);
	h.getData();
	*/


	return 0;

};