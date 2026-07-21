#include <iostream>
using namespace std;
int CountVowels(char Word[])
{
    int Count = 0;
    int Index = 0;
    while(Word[Index] != '\0')
    {
        if(Word[Index] == 'a' || Word[Index] == 'e' ||
           Word[Index] == 'i' || Word[Index] == 'o' ||
           Word[Index] == 'u' || Word[Index] == 'A' ||
           Word[Index] == 'E' || Word[Index] == 'I' ||
           Word[Index] == 'O' || Word[Index] == 'U')
        {
            Count++;
        }
        Index++;
    }
    return Count;
}
int main()
{
    char Name[100];
    cout << "Enter a word: ";
    cin >> Name;
    cout << "Total Vowels: " << CountVowels(Name);
    return 0;
	}