#include "StringCalculator.h"
#include <conio.h>
#include <iostream>
using namespace std;
int main() {
	mawile::Calculator calc;
	std::string str;

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\"  to exit the program " << endl << endl;
	while (true) {
		cout << "input >>" ;
		std::getline(std::cin, str);
		if (calc.Execute(str)) {
			std::cerr << calc.Value() << '\n';
		}
		else break;
	}
}