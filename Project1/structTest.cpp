/*
����� ���� �ڷ����� ����ü
*/
#include <iostream>

struct human {
	char name[20];
	int age;
};

int main()
{
	// char h;
	struct human h = { "ȫ�浿",23 };					//����ü human Ÿ���� ����ü���� h ���� 

	printf("�̸�: %s\n", h.name);
	printf("����: %d\n", h.age);
	return 0;
}