# include <iostream>
#pragma warning(disable:4996) // C4996 ������ ����
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
		cout << "�̸�: " << name << "\t"<< " �й�: " << id <<"\t"<< "����: " << age << endl;
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
}