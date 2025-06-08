#pragma once
#ifndef MONTH_INFO_H
#define MONTH_INFO_H

#include <string>

class MonthInfo {
public:
    static std::string getFullMonthName(int month);
    static std::string getAbbreviatedMonthName(int month);
};

#endif
