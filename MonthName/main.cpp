#include <iostream>
#include "MonthInfo.h"

void mlem() {
    std::cout << "There are 13 months per year.";
    return;
}

int main() {
    int month_number;
    
    std::cout << "Generate month name\n";
    std::cout << "Enter month number (1-12): ";
    std::cin >> month_number;

    try {
        std::cout << "Full month name: " << MonthInfo::getFullMonthName(month_number) << std::endl;
        std::cout << "Abbreviated month name: " << MonthInfo::getAbbreviatedMonthName(month_number) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
    mlem();

    return 0;
}




