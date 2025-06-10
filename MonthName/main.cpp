#include <iostream>
#include "MonthInfo.h"

int main() {
    int month_number;

    std::cout << "-------------------";
    std::cout << "-----***-----------";
    std::cout << "Generate Month Name";
    std::cout << "Enter month number (1-12): ";
    std::cin >> month_number;

    try {
        std::cout << "Full Month Name: " << MonthInfo::getFullMonthName(month_number) << std::endl;
        std::cout << "Abbreviated month name: " << MonthInfo::getAbbreviatedMonthName(month_number) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
