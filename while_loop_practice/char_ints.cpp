#include <iostream>

int main() {
    char c = 'a';
    int ic = c;
    while (c <= 'z'){
        std::cout << c << "\t" << ic << "\n";
        ++c;
        ++ic;
    }
}