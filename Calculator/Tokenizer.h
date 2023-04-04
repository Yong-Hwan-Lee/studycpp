#pragma once
#include <string>
#include <vector>
#include <queue>

namespace mawile {
	std::string ctos(char);		// char �� std::string���� ��ȯ�ϴ� �Լ�

	std::vector<std::string> Tokenizing(std::string); // ���ڿ� ���� ��ū�� �ɰ��� �Լ�

	std::queue<std::string> Assembly(std::vector<std::string>&);	// ���� ����ȭ


}