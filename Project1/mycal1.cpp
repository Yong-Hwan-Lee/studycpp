#include <iostream>
using namespace std;

class Mycalu {
private:
	int num1;
	int num2;
;
public://생성자로 초기화한다.(콜론 초기화)
	Mycalu(int n1, int n2);
	add();
	sub();
	mul();
	div();
};

Mycalu::Mycalu(int n1, int n2) :num1(n1), num2(n2) 
{

}


int main()
{




	return 0;
}