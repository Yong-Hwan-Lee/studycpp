#include <stdio.h>

int main()
{
    /*
    const int num = 20;    // ���ȭ���ÿ� �ʱ�ȭ
    printf("num: %d \n", num);

    int* p = &num; // �ּҸ� ������ �� �ִ� ������ ����,&(�ּҿ�����)
    printf("p�� ����� ��: %p \n", p);
    printf("p�� �����ϴ� ��:%d\n", *p);
    *p = 100;
    printf("p�� ����Ű�� ���� �����Ͱ� : %d\n", *p);
    printf("num:%d\n", num);
    */

    const int num = 10;
    //num = 100;
    printf("num: %d\n", num);

    int* p = &num;
    *p = 100;
    printf("num : %d \n", num);

    const int* pa = &num;

    int num1 = 100;
    int num2 = 200;
    const int* pa = &num1;  //�������� ���
    printf("pa: %p\n", pa);
    pa = &num2;
    printf("���� �� pa: %p\n", pa);
    //*pa = 50;
    int* pb = &num1; //�����ͺ����� ���
    //pb = &num2;
    //*pb = 70;

    return 0;
}