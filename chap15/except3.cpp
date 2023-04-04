#include <iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;

	/*
	cout << "피젯수를 입력하세요: " << endl;
	cin >> a;
	cout << "젯수를 입력하세요: " << endl;
	cin >> b;
	*/
	try {
		if (b == 0) throw b;  //예외가 발생되면
		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << d << endl;
	}
	catch (int ex) {
		cout << ex << "로 나눌 수 없습니다. 예외발생" << endl;
	}
}
int main()
{

	divide(10, 3);
	divide(100, 5);
	divide(3, 0);


	cout << "예외가 발생을 해도 정상종료!!!" << endl;
	return 0;
}