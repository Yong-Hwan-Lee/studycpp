#include <iostream>
using namespace std;

class Myclass {
	int num1, num2;
	const char* name;
public:
	Myclass(int anum1 =0, int anum2=0, const char* aname=nullptr) : num1(anum1), num2(anum2),name(aname) {

	}
	void showData() {
		cout << num1 << "," << num2 << "," << name << endl;
	}
};

int main()
{
	Myclass m(1, 2, "hong");
	m.showData();
	Myclass cm(m);
	cm.showData();

	Myclass cm1;
	cm1 = cm;
	cm1.showData();

	return 0;
}