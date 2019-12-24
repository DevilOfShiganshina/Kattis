#include <iostream>
#include <string>

char value(std::string str) {
	if (str == "000") return '0';
	else if (str == "001") return '1';
	else if (str == "010") return '2';
	else if (str == "011") return '3';
	else if (str == "100") return '4';
	else if (str == "101") return '5';
	else if (str == "110") return '6';
	else return '7';

}

std::string octal(std::string in) {
	std::string retval = "";
	while (in != "") {
		retval += value(in.substr(0, 3));
		in = in.substr(3);
	} return retval;
}

int main() {

	std::string input;
	std::cin >> input;

	if (input.length() % 3 != 0) {
		for (int i = 0; i < (input.length() % 3); i++) {
			input = "0" + input;
		}
	}

	std::cout << octal(input) << std::endl;

	return 0;
}