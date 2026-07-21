#include <iostream>
using namespace std;

bool IsLeapYear(int Year)
{
    if ((Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0))
    {
        return true;
    }

    return false;
}

int main()
{
    cout << IsLeapYear(2024);

    return 0;
}