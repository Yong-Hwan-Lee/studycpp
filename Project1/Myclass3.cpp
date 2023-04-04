#include <iostream>
#pragma warning(disable:4996) // C4996 에러를 무시
using namespace std;


class Myclass
{
private:
	char id;
	int age;
	char * name;
public:
	Myclass(char aid, int aage, const char* aname)  //생성자 원형
	{
		id = aid;
		age = aage;
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy(name, aname);
		
	}
	//id = aid;
	//age = aage;
	//strcpy(name, aname);

	void getData() //메소드 원형 선언
	{
		cout << "학번: " << id << endl;
		cout << "나이: " << age << endl;
		cout << "이름: " << name << endl;
	}
	~Myclass()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main(void)
{
	Myclass man1('1', 29, "Lee dong woo");
	Myclass man2('2', 41, "Jang dodng gun");
	man1.getData();
	man2.getData();
	return 0;

}