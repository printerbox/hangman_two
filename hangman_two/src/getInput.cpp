#include <cstdint>
#include <iostream>

/*incomplete I know*/

bool is_letter_right(std::string& word) {
	
	char letter {};
	std::cin >> letter;
	std::cin.clear();

	if (letter == word[0])
		std::cout << letter;
	return true;
}