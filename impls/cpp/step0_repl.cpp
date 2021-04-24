#include <iostream>
#include <string>

std::string READ(std::string in) {
	return in;
}

std::string EVAL(std::string in) {
	return in;
}

std::string PRINT(std::string in) {
	return in;
}

std::string rep(std::string in) {
	std::string a = READ(in);
	std::string b = EVAL(a);
	return PRINT(b);
}

int main() {

	std::string inputString;
	for (;;) {

		std::cout << "user> ";
		std::getline(std::cin, inputString);
		std::cout << rep(inputString) << std::endl;

	}

	return 0;
}

