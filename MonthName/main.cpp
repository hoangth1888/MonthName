#include <iostream>
#include "MonthInfo.h"

int main() {
    int month_number;

    std::cout << "Month Name Generate1";
    std::cout << "Enter month number (1-12): ";
    std::cin >> month_number;

    try {
        std::cout << "Full month name: " << MonthInfo::getFullMonthName(month_number) << std::endl;
        std::cout << "Abbreviated month name: " << MonthInfo::getAbbreviatedMonthName(month_number) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}