#include <cctype>
#include <iostream>
#include <string>
#include <type_traits>

int main () {
	std::string input;
	std::getline(std::cin, input);

	bool allDigits = true;

	for (char c : input) {
		if (c <!isdigit(c)) {
			allDigits = false;
			break;
		}
		if (isspace(c) || c == ','|| c == '.' || c == '-' || c == '!') {
			std::cout << "No" << std::endl;
			return 0;
		 }
	}

	if (allDigits) {
		std::cout << "Yes" << std::endl;
	}else {
		std::cout << "No" << std::endl;
	}

	return 0;
}
