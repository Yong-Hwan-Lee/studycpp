#include <stdio.h>


int g = 0;
void func()
{
	printf("func() : %p\n", func);
}
int main()
{
	int n = 10;      //��������
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("local n : %p\n", &n);
	printf("global g : %p\n", &g);
	printf("static c: %p\n", &c);
	printf("const d: %p\n", &d);
	printf("array : %p\n",ary);
	return 0;
}


/*
�޸𸮿����� ũ�Գ�����
1, �ڵ弼�׸�Ʈ, 2, �����ͼ��׸�Ʈ
*/