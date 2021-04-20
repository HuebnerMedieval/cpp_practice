#include <iostream>

int main() {
    constexpr double y_per_usd = 0.0093;
    constexpr double k_per_usd = 0.12;
    constexpr double gbp_per_usd = 1.39;

    int amount;
    char unit = ' ';

    std::cout << "Enter an amount of currency, followed by y(yen), k(kroner), or p(gbp), to be converted to dollars: ";
    std::cin >> amount >> unit;

    if (unit == 'y')
        std::cout << amount << "Yen = " << amount * y_per_usd << "Dollars\n";
    else if (unit == 'k')
        std::cout << amount << "Kroner = " << amount * k_per_usd << "Dollars\n";
    else if (unit == 'p')
        std::cout << amount << "GBP = " << amount * gbp_per_usd << "Dollars\n";
    else
        std::cout << "I don't know what " << unit << " means.\n";
}