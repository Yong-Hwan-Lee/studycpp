#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)
	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}

};

class PermanentWorker : public Employee
{private:
	int salary; // 월급여
public:
	PermanentWorker(const char*name, int money)
		: Employee(name), salary(money)
	{ }
	int GetPay()const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;
	int payPerHour;
public:
	TemporaryWorker(const char*name, int pay)
		: Employee(name),workTime(0),payPerHour(pay)
	{}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() <<endl<<endl;
	}
};

class SalesWorker :public PermanentWorker 
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char*name,int money,double ratio)
		: PermanentWorker(name,money),salesResult(0),bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		return PermanentWorker::GetPay() // getpay함수호출
			+ (int)(salesResult * bonusRatio);
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}

};

class EmployeeHandler
{
private:
	Employee* empList[50];
	int empNum;
public:
	EmployeeHandler():empNum(0)
	{}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo()const
	{
		/*
		for (int i = 0; i < empNum; i++)
			empList[i]->ShowSalaryInfo();
		*/
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		/*
		for (int i = 0;i < empNum;i++)
			sum += empList[i]->GetPay();
		*/
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0;i < empNum;i++)
			delete empList[i];
	}
};

int main(void)
{
	// 직원관리 컨트롤 클래스의 객체생성
	EmployeeHandler handler;

	// 정규직 등록
	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	// 임시직 등록
	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	//영업직 등록
	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	//이번달 급여정보
	handler.ShowAllSalaryInfo();

	// 이번달 급여 총합
	handler.ShowTotalSalary();
	return 0;
	
}


/*
배열 포인터 - 배열을 가리키는 포인터
포인터배열 - 포인터로 이루어진 배열

1. 배열 포인터
int* pa = &a;
int ary[3] = {1,2,3};
int (* pary) =ary;               // 1차원 배열포인터
int arr[2][3] = {{1,2,3},{4,5,6}};
int (*parr)[3]= arr;			// 2차원 배열을 가리키는 배열 포인터


2. 포인터 배열
int n1 = 10, n2 = 20, n3 = 30
int* ary[3] = {&n1, &n2,&n3};
*/