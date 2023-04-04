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
		if (str[i] == '\0') { //문자열의 끝에 도달했을시
			ans.push_back(tmp);
			break;
		}
		else if (str[i] == ' ') { //공백일시
			if (!tmp.empty()) ans.push_back(tmp);
			tmp = "";
			continue;
		}
		else if (str[i] == '*' && str[i + 1] == '*') { //제곱연산자일시
			if (number) {
				number = false;
				ans.push_back(tmp);
			}
			ans.push_back("**");
			++i;
			tmp = "";
		}
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
			str[i] == '/' || str[i] == '(' || str[i] == ')') { //일반 연산자일시
			if (number) {
				number = false;
				ans.push_back(tmp);
			}
			ans.push_back(ctos(str[i]));
			tmp = "";
		}
		else { //숫자일시
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