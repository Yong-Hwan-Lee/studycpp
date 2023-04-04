#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x=0, int y=0): xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << "," << ypos << ']' << endl;
	}
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}
	friend Point& operator --(Point& ref);
};

Point& operator --(Point& ref)
{
	ref.xpos -= 1;
	ref.ypos -= 1;
	return ref;
}

/*
int main(void)
{
	Point pos(1, 2);
	++pos;
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();

	return 0;
}
*/

int main(void)
{
	int num = 10;
	cout << num++ << endl;				// 출력 후 num의 값 증가
	cout << ++num << endl;				// num의 값 증가 후 출력
	return 0;

}