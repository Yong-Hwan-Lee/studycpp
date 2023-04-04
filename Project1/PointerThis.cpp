#include <iostream>
#include <cstring>
#pragma warning(disable:4996) // C4996 ������ ����
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "num=" << num << ",";
		cout << "address=" << this << endl;
	}
	void ShowSimpleData()
	{
		cout << num << endl;
	}
	SoSimple*GetThisPointer()
	{
		return this;
	}
};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();			// sim1��ü�� �ּҰ� ����
	cout << ptr1 << ",";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ",";
	ptr2->ShowSimpleData();
	return 0;

}