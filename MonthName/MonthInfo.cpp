#include "MonthInfo.h"
#include <stdexcept>

std::string MonthInfo::getFullMonthName(int month) {
    static const std::string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (month < 1 || month > 12) {
        throw std::out_of_range("Invalid month number. Please enter a number between 1 and 12.");
    }

    return months[month - 1];
}

std::string MonthInfo::getAbbreviatedMonthName(int month) {
    static const std::string months_abbr[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (month < 1 || month > 12) {
        throw std::out_of_range("Invalid month number. Please enter a number between 1 and 12.");
    }

    return months_abbr[month - 1];
}
