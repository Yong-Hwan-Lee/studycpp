#include <iostream>
using namespace std;

class Myclass {
private:					// �ܺ����� ����
	int private_val;
public:						// �ܺ����ٰ���
	int public_val;
protected:					// ��ӿ����� ���ٰ���
	int protected_val;

public:						// �ɹ��Լ��� ������ public
	void set(int an) {
		private_val = an;
	}
	void get() {
		cout << "public_val : " << public_val << endl;
		cout << "private_val: "<<private_val << endl;

	}
};

int main()
{
	Myclass o;
	// o.private_val;
	o.public_val =100;
	// o.protected_val;
	o.set(200);

	o.get();
	
	return 0;
}