//author �̿�ȯ
#include "Calculator.h"
#include<iostream>
using namespace std;

double Calculator::Calculate(double x, char cper, double y)
{
    switch (cper)               //cper ����ġ��
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}