#include <iostream>
#include <cstring>
#pragma warning(disable:4996) // C4996 에러를 무시
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;			//this->num1(멤버변수) = num1 (매개변수);
		this->num2 = num2;
	}
	/* TwoNumber(int num1, int num2)
			:num1(num1), num2(num2)
		{
		//empty
		}*/
	void ShowTwoNumber()
	{
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}

};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}

