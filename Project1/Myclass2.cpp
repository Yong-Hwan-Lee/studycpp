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
	Myclass(char aid, int aage, const char* aname);  //������ ����
	
		//id = aid;
		//age = aage;
		//strcpy(name, aname);
	
	void getData(); //�޼ҵ� ���� ����
	
};

Myclass::Myclass(char aid, int aage, const char* aname) //������ ����
{
	printf("������ ȣ��\n");
	id = aid;
	age = aage;
	strcpy(name, aname);
}
void Myclass::getData()
{
	cout << "�й�: " << id << endl;
	cout << "����: " << age << endl;
	cout << "�̸�: " << name << endl;
}
int main(void)
{
	Myclass s('2', 27, "ȫ�浿");
	s.getData();
	return 0;
}