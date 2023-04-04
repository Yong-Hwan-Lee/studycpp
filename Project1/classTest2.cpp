# include <iostream>
#pragma warning(disable:4996) // C4996 에러를 무시
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) {
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "이름: " << name << "\t"<< " 학번: " << id <<"\t"<< "나이: " << age << endl;
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
}