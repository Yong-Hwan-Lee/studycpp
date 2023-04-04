#include "StringCalculator.h"

void mawile::Calculator::Calculer() {
	int b = __Number.top();
	__Number.pop();
	int a = __Number.top();
	__Number.pop();
	std::string _Oper = __Operator.top()._operator;
	__Operator.pop();

	if (_Oper == "+") __Number.push(a + b);
	else if (_Oper == "-") __Number.push(a - b);
	else if (_Oper == "*") __Number.push(a * b);
	else if (_Oper == "/") __Number.push(a / b);
	else if (_Oper == "**") __Number.push((int)std::pow(a, b));
}

mawile::Calculator::Calculator() {

}

mawile::Calculator::Calculator(std::string _Input) {
	Execute(_Input);
}


bool mawile::Calculator::Execute(std::string _Input) {
	if (_Input == "") return false;

	try {
		std::string _Token;

		std::vector<std::string> Token1 = Tokenizing(_Input);
		std::queue<std::string> Token2 = Assembly(Token1);

		while (!Token2.empty()) {
			_Token = Token2.front();
			Token2.pop();

			if (_Token == "(") {
				__Operator.push({ 0 , _Token });
			}
			else if (_Token == ")") {
				while (__Operator.top()._operator != "(") Calculer();
				__Operator.pop();
			}
			else if (_Token == "+" || _Token == "-" || _Token == "*" || _Token == "/" || _Token == "**") {
				int Priority = 0;
				if (_Token == "+" || _Token == "-") Priority = 1;
				else if (_Token == "*" || _Token == "/") Priority = 2;
				else if (_Token == "**") Priority = 3;

				while (!__Operator.empty() && Priority <= __Operator.top()._priority) Calculer();
				__Operator.push({ Priority , _Token });
			}
			else __Number.push(std::stoi(_Token));
		}

		while (!__Operator.empty()) Calculer();
		_Value = __Number.top();
		while (!__Number.empty()) __Number.pop();
	}
	catch (std::exception&) {
		return false;
	}

	return true;
}

int mawile::Calculator::Value() {
	return _Value;
}