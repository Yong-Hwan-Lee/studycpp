//author �̿�ȯ
#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char cper = '+';                    //����,�ʱ�ȭ

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    cout << "Press \"ctrl + c\"  to exit the program " << endl << endl;
   

    Calculator c;
    while (true)            //�ݺ�����
    {   
        cout << "input >>";                 
        cin >> x >> cper >> y;                      // x cper y �Է�
        if ((y == 0) && (cper == '/'))              //zero ���� ����ó��
            cout << "0���� �����������ϴ�." << endl;
        else
        {
            result = c.Calculate(x, cper, y);
            cout << "=" << result << endl << endl;              // ����� ���
        }
        
    }
    
    return 0;
}