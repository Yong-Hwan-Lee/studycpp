#include <iostream>

class StaticTest {
private:
	static int a;					// 멤버션수의 static
	int b;
public:
	StaticTest();
	static void setData(int aa);		// 멤버함수의 static
	void print();
};
int StaticTest::a = 10;				//static 멤버변수 초기화
StaticTest::StaticTest()
{
	this->b = 20;
}
void StaticTest::setData(int aa)
{
	//this(객체)->a = 30; static-> class소속  stataic 멤버는 객체 포인터로 접근할 수 없음
	a = aa;
}
void StaticTest::print()
{
	std::cout << "a: " << a << "," << "b: " << b << std::endl;
}

int main()
{
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();

	return 0;
}