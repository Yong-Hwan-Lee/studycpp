#pragma once
#include <string>
#include <vector>
#include <queue>

namespace mawile {
	std::string ctos(char);		// char 을 std::string으로 변환하는 함수

	std::vector<std::string> Tokenizing(std::string); // 문자열 계산식 토큰을 쪼개는 함수

	std::queue<std::string> Assembly(std::vector<std::string>&);	// 공백 최적화


}