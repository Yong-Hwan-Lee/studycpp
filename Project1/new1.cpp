/*
�޸� �����Ҵ�
*/
#include <iostream>

int main()
{
	int* arr;
	char size;

	printf("�迭���� ����: ");
	scanf_s("%d", &size);		// scnaf�� �Է��� �������� �ּҿ����� �ʿ�

	arr = (int*)malloc(sizeof(int));			// heap�������Ҵ�
	printf("������� �迭 ũ��: %d\n", sizeof(int)*size);
	printf("%d\n", sizeof(int));

	free(arr);            //�޸� ����


	return 0;
}