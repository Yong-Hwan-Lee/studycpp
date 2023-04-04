#pragma once
#pragma once
#include <stack>
#include <string>
#include <sstream>

#include "Tokenizer.h"



namespace mawile {

	
	/// ������ �켱������ ������ �����ϴ� ����ü
	
	struct _Operator {

		/// ������ �켱����

		int _priority;


		/// ������ ����

		std::string _operator;
	};

	class Calculator {
	public:

		/// ���ڿ� ������ �����ϴ� �Լ�

		/// <param name="">���ڿ� ����</param>
		/// <returns>��� ��������</returns>
		bool Execute(std::string);


		/// ���� ����� ��ȯ�ϴ� �Լ�

		/// <returns>���� ���</returns>
		int Value();


		/// �Ϲ� ������

		Calculator();


		/// ���ڿ� ������ ����ϴ� ������

		/// <param name="">���ڿ� ����</param>
		Calculator(std::string);
	private:
		void Calculer();


		/// ������ ����

		std::stack<_Operator> __Operator;


		/// ���� ����

		std::stack<int> __Number;


		/// ��� ���

		int _Value;
	};
}