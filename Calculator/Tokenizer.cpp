#include "Tokenizer.h"

std::string mawile::ctos(char c) {
	std::string str = "";;
	str += c;
	return str;
}

std::vector<std::string>mawile::Tokenizing(std::string str) {
	std::vector<std::string> ans;
	std::string tmp = "";
	bool number = false;

	for (std::size_t i = 0; i <= str.size();++i) {
		if (str[i] == '\0') { //���ڿ��� ���� ����������
			ans.push_back(tmp);
			break;
		}
		else if (str[i] == ' ') { //�����Ͻ�
			if (!tmp.empty()) ans.push_back(tmp);
			tmp = "";
			continue;
		}
		else if (str[i] == '*' && str[i + 1] == '*') { //�����������Ͻ�
			if (number) {
				number = false;
				ans.push_back(tmp);
			}
			ans.push_back("**");
			++i;
			tmp = "";
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
			str[i] == '/' || str[i] == '(' || str[i] == ')') { //�Ϲ� �������Ͻ�
			if (number) {
				number = false;
				ans.push_back(tmp);
			}
			ans.push_back(ctos(str[i]));
			tmp = "";
		}
		else { //�����Ͻ�
			tmp += str[i];
			number = true;
		}
	}

	return ans;
}

std::queue<std::string> mawile::Assembly(std::vector<std::string>& vec) {
	std::queue<std::string> ans;

	for (std::size_t i = 0; i < vec.size(); ++i) {
		if (!vec[i].empty()) ans.push(vec[i]);
	}

	return ans;
}