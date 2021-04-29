#include <iostream>

int main() {
    for (char c='a'; c<='z'; c++){
        int ic = c;
        std::cout << c << "\t" << ic
        << "\t" << char(c-32) << "\t" << ic-32 << "\n";
    }
}