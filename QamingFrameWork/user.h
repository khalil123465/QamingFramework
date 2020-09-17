#ifndef USER_H
#define USER_H
#include<regex>
#include<date.h>
using namespace std;
class User
{
public:
    User();
    string Username,FirstName,LastName,Password;
    Date* Birthdate;
    static bool IsValidPassword(string& password);
    static bool IsValidName(string& name);
};

#endif // USER_H
