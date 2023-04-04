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
	Myclass(char aid, int aage, const char* aname);  //생성자 원형
	
		//id = aid;
		//age = aage;
		//strcpy(name, aname);
	
	void getData(); //메소드 원형 선언
	
};

Myclass::Myclass(char aid, int aage, const char* aname) //생성자 정의
{
	printf("생성자 호출\n");
	id = aid;
	age = aage;
	strcpy(name, aname);
}
void Myclass::getData()
{
	cout << "학번: " << id << endl;
	cout << "나이: " << age << endl;
	cout << "이름: " << name << endl;
}
int main(void)
{
	Myclass s('2', 27, "홍길동");
	s.getData();
	return 0;
}