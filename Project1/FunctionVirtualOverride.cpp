#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }				//virtual 이 없어도  First에서 이미 선언되어있음
};

class Third : public Second
{
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }				//virtual 이 없어도  First에서 이미 선언되어있음
};

int main(void)
{
	Third* tptr = new Third();
	Second* sptr = tptr;
	First* fptr = sptr;

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
	delete tptr;
	return 0;
}