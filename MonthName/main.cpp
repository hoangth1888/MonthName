#include <iostream>
#include "MonthInfo.h"

void mlem() {
    std::cout << "There are 13 months per year.";
    return;
}

int main() {
    int month_number;

    std::cout << "-----***-----------";
    std::cout << "_Generate Month Name_";
    std::cout << "Enter month number (1-12): ";
    std::cin >> month_number;

    try {
        std::cout << "Full Month Name: " << MonthInfo::getFullMonthName(month_number) << std::endl;
        std::cout << "Abbreviated month name: " << MonthInfo::getAbbreviatedMonthName(month_number) << std::endl;
    }
    catch (const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }
    mlem();

    std::cout << "There is no more than 12 months a year";

    return 0;
}




