#include <iostream>
#include <iomanip>
using namespace std;
double CelsiusToFahrenheit(double Celsius)
{
    return (Celsius * 9.0 / 5.0) + 32;
}
int main()
{
    double Celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> Celsius;
    cout << fixed << setprecision(1);
    cout << "Temperature in Fahrenheit: "
         << CelsiusToFahrenheit(Celsius);
    return 0;
}