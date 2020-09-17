#ifndef DATE_H
#define DATE_H
#include<bits/stdc++.h>
using namespace std;

class Date {
public :
    string day, month, year;
    Date(string _day, string _month,string _year);
    static vector<int> GetCurrentDate();
    static string GetCurrentDateString();
};

#endif // DATE_H
