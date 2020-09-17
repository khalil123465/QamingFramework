#include "date.h"

Date::Date(string _day, string _month,string _year) {
    day = _day;
    month = _month;
    year = _year;
}

// returns {day,month,year}
vector<int>Date:: GetCurrentDate() {
    time_t now = time(0);
    tm* ltm = localtime(&now);
    return { ltm->tm_mday ,1 + ltm->tm_mon,1900 + ltm->tm_year };
}

string Date:: GetCurrentDateString() {
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}
