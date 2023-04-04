# include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) :num(n) {
		cout << num << " CTest constructor" << endl;
	}
	virtual ~CTest() {
		cout << "CTest destructor" << endl;
	}
	void func() {
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() {
		cout << "CTest vfunc()" << endl;
	}

};
class CTestSub :public CTest {
private:
	int snum;
public:
	CTestSub(int n1, int n2) : CTest(n1), snum(n2) {
		cout << snum << " CTestSub constructor" << endl;
	}
	~CTestSub() {
		cout << "CTestSub destructor" << endl;
	}
	void vfunc() {
		cout << "CTestSub func()" << endl;
	}
};
int main()
{
	//CTest c1(10);
	//CTestSub c2(1, 10);

	CTest* ps = new CTestSub(3, 33);
	delete ps;
	return 0;
}