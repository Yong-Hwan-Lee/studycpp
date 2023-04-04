#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 or ypos < 0)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const // const함수
{
	return x;
}

int Point::GetY() const // const함수에 대해서는 잠시 후에 설명
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (0 > xpos or xpos > 100)
	{
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}
	x = xpos;
	return true;
}
bool Point::SetY(int ypos)
{
	if (0 > ypos or ypos > 100)
	{
		cout << "벗어난 범위으 값 전달" << endl;
		return false;
	}
	y = ypos;
	return true;
}