/*
�޸� �����Ҵ� c++Ÿ��
*/

#include <iostream>
using namespace std;

int main()
{
	int size;
	int* arr;
	cout << "�迭�� ������ �Է��Ͻÿ� $:" << endl;
	cin >>size;
	arr = new int[size];

	for (int i = 0;i < size;i++) {
		cout << i + 1 << "��° ���� $:";
		cin >> arr[i];
	}



	return 0;
}