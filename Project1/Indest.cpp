#include <iostream>
using namespace std;
class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout << num <<endl<< "CTest Constructor" << endl;
	}
	~CTest() {						// ����Ŭ���� �Ҹ���
		cout << "CTest Destructor" << endl;
	}
};
class CTestsub :public CTest {
private:
	int subn;
public:
	CTestsub(int sn, int n) : CTest(sn)
	{
		subn = n;
		cout << subn <<endl<< "CTestsub Constructor" << endl;

	}
	~CTestsub() {					// ����Ŭ���� �Ҹ���
		cout << "CTestsub Destructor" << endl;
	}


};
int main()
{
	CTest c1(10);
	CTestsub c2(1, 10);

	return 0;
}