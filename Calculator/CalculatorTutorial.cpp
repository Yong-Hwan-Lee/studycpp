//author 이용환
#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char cper = '+';                    //선언,초기화

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
    cout << "Press \"ctrl + c\"  to exit the program " << endl << endl;
   

    Calculator c;
    while (true)            //반복실행
    {   
        cout << "input >>";                 
        cin >> x >> cper >> y;                      // x cper y 입력
        if ((y == 0) && (cper == '/'))              //zero 나눔 예외처리
            cout << "0으로 나눌수없습니다." << endl;
        else
        {
            result = c.Calculate(x, cper, y);
            cout << "=" << result << endl << endl;              // 결과값 출력
        }
        
    }
    
    return 0;
}