#include <iostream>
using namespace std;
int CalculateSecondLow(int Numbers[], int Size)
{
    int Lowest = Numbers[0];
    int SecondLowest = Numbers[0];
    for(int i = 1; i < Size; i++)
    {
        if(Numbers[i] < Lowest)
        {
            SecondLowest = Lowest;
            Lowest = Numbers[i];
        }
        else if(Numbers[i] < SecondLowest && Numbers[i] != Lowest)
        {
            SecondLowest = Numbers[i];
        }
    }
    return SecondLowest;
}
int CalculateSecondHigh(int Numbers[], int Size)
{
    int Highest = Numbers[0];
    int SecondHighest = Numbers[0];
    for(int i = 1; i < Size; i++)
    {
        if(Numbers[i] > Highest)
        {
            SecondHighest = Highest;
            Highest = Numbers[i];
        }
        else if(Numbers[i] > SecondHighest && Numbers[i] != Highest)
        {
            SecondHighest = Numbers[i];
        }
    }
    return SecondHighest;
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
    cout << "2nd Lowest Score: " << CalculateSecondLow(Scores, Size) << endl;
    cout << "2nd Highest Score: " << CalculateSecondHigh(Scores, Size);
    return 0;
}