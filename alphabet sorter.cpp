#include <iostream>
using namespace std;
void BubbleSort(char Letters[], int Size)
{
    for(int i = 0; i < Size - 1; i++)
    {
        for(int j = 0; j < Size - 1 - i; j++)
        {
            if(Letters[j] > Letters[j + 1])
            {
                char Temp = Letters[j];
                Letters[j] = Letters[j + 1];
                Letters[j + 1] = Temp;
            }
        }
    }
}
int main()
{
    char Letters[5];
    cout << "Enter 5 letters:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> Letters[i];
    }
    BubbleSort(Letters, 5);
    cout << "Sorted Letters: ";
    for(int i = 0; i < 5; i++)
    {
        cout << Letters[i] << " ";
    }
    return 0;
}
