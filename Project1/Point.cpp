#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 or ypos < 0)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const // const�Լ�
{
	return x;
}

int Point::GetY() const // const�Լ��� ���ؼ��� ��� �Ŀ� ����
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (0 > xpos or xpos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos or ypos > 100)
	{
		cout << "��� ������ �� ����" << endl;
		return false;
	}
	y = ypos;
	return true;
}