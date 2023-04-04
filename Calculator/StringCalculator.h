#pragma once
#pragma once
#include <stack>
#include <string>
#include <sstream>

#include "Tokenizer.h"



namespace mawile {

	
	/// 연산자 우선순위와 정보를 저장하는 구조체
	
	struct _Operator {

		/// 연산자 우선순위

		int _priority;


		/// 연산자 정보

		std::string _operator;
	};

	class Calculator {
	public:

		/// 문자열 계산식을 실행하는 함수

		/// <param name="">문자열 계산식</param>
		/// <returns>계산 성공여부</returns>
		bool Execute(std::string);


		/// 계산된 결과를 반환하는 함수

		/// <returns>계산된 결과</returns>
		int Value();


		/// 일반 생성자

		Calculator();


		/// 문자열 계산식을 계산하는 생성자

		/// <param name="">문자열 계산식</param>
		Calculator(std::string);
	private:
		void Calculer();


		/// 연산자 스택

		std::stack<_Operator> __Operator;


		/// 숫자 스택

		std::stack<int> __Number;


		/// 계산 결과

		int _Value;
	};
}