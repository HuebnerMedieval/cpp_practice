#include <iostream>

// main function
int main() {
    
    // initializes and declares variable c as the letter 'a'
    char c = 'a';
    // initializes and declared variable ic as the int value of the variable c
    int ic = c;

    // repeats the block for each letter of the alphabet
    while (c <= 'z'){
        // outputs c tabchar ic newline
        std::cout << c << "\t" << ic << "\n";
        // iterates c to the next letter
        ++c;
        // iterates ic to the next integet
        ++ic;
    }
}