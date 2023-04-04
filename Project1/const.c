#include <stdio.h>

int main()
{
    /*
    const int num = 20;    // 상수화동시에 초기화
    printf("num: %d \n", num);

    int* p = &num; // 주소를 저장할 수 있는 포인터 변수,&(주소연산자)
    printf("p에 저장된 값: %p \n", p);
    printf("p가 참조하는 값:%d\n", *p);
    *p = 100;
    printf("p가 가리키는 곳의 데이터값 : %d\n", *p);
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
    const int* pa = &num1;  //데이터의 상수
    printf("pa: %p\n", pa);
    pa = &num2;
    printf("변경 후 pa: %p\n", pa);
    //*pa = 50;
    int* pb = &num1; //포인터변수의 상수
    //pb = &num2;
    //*pb = 70;

    return 0;
}