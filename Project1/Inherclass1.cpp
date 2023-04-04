#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char*, int);
	void getData();
};
class Student : public Person {
private:
	int studentId;
public:
	Student(const char*,int, int);
	void showData();						//오버라이딩 - 상속관계에 있을때 메소드이름같을경우/오버로딩- 메소드이름이 같을경우
};
Person::Person(const char* aname, int aage) {
	strcpy(name, aname);
	age = aage;
}
void Person::getData() {
	cout << "name: " << name << endl;
	cout << "age:" << age<<endl;
}

Student::Student(const char* aname, int aage, int astudentId)
	: Person(aname, aage)
{
	studentId = astudentId;
}
void Student::showData()
{
	getData();
	cout << "studentId: " << studentId << endl;
}
int main() 
{
	Person p("리정무", 29);
	p.getData();
	Student s("홍길동", 27, 2);
	s.showData();
	return 0;
}