/*Hangman game, attempt 2.*/

#include <iostream>
#include <cstdint>

#define RAND_MAX 5


//forward declaration of the function in getInput.cpp
bool is_letter_right(std::string& word);

int main() {
    
    std::cout << "You'll have to guess the word, good luck!" << std::endl;

    std::string words[5]{ "potato", "watermelon", "pineapple", "apple", "melon" };

    srand(time(NULL));

    /*picks a random word out of the words array, i dont think it's working well*/
    std::string word{ words[rand()] };

    std::cout << word;

    /*prints underscores for the number of letters in the word*/
    int a = 0;
    while (a < static_cast<int>(word.size())) {
        std::cout << "_";
        a++;
    }
    
    is_letter_right(word);

    return EXIT_SUCCESS;

}
