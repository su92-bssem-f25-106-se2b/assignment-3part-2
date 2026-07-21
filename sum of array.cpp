#include <iostream>
#include <iomanip>
using namespace std;
double CalculateSum(int Numbers[], int Size)
{
    double Sum = 0;
    for(int i = 0; i < Size; i++)
    {
        Sum += Numbers[i];
    }
    return Sum;
}
int main()
{
    int Size;
    cout << "Enter number of students: ";
    cin >> Size;
    int Scores[100];
    cout << "Enter scores:\n";
    for(int i = 0; i < Size; i++)
    {
        cin >> Scores[i];
    }
    cout << fixed << setprecision(2);
    cout << "Total Sum: " << CalculateSum(Scores, Size);
    return 0;
}