#include <iostream>

// main function
int main() {
    // for loop to print characters and integers
    for (char c='a'; c<='z'; c++){
        // initializes variable to convert c to int
        int ic = c;
        // outputs the character and its integer value
        // subtracting 32 from char points to ASCII for its capital
        std::cout << c << "\t" << ic
        << "\t" << char(c-32) << "\t" << ic-32 << "\n";
    }
}