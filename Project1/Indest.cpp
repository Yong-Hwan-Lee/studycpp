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
	~CTest() {						// ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
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
	~CTestsub() {					// ¼­ºêÅ¬·¡½º ¼Ò¸êÀÚ
		cout << "CTestsub Destructor" << endl;
	}


};
int main()
{
	CTest c1(10);
	CTestsub c2(1, 10);

	return 0;
}