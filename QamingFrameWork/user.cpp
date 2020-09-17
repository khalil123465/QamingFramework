#include "user.h"

User::User()
{
    Birthdate= new Date("1","1","1970");
}

bool User:: IsValidPassword(string& password) {
    regex hasNumber = regex("[0-9]+");
    regex hasUpperChar = regex("[A-Z]+");
    regex hasLowerChar = regex("[a-z]+");
    regex hasMinimum8Chars = regex(".{8,}");
    return regex_search(password, hasNumber)
            && regex_search(password, hasUpperChar)
            && regex_search(password, hasLowerChar)
            && regex_search(password, hasMinimum8Chars);
}

bool IsLatinName(string& name)
{
    if (name.size() == 0)return false;

    for (int i = 0; i < name.size(); i++)
    {
        if (!((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z') || name[i] == ' '))
        {
            return false;
        }
    }

    return true;
}

bool User:: IsValidName(string& name)
{
    return !name.empty() && IsLatinName(name);
}
