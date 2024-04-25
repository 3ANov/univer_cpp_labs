#include <iostream>
#include <algorithm>

using namespace std;
void modifyBits(char *sequence, int minIndex, int maxIndex);


int main()
{
    char sequence[8];
     cout << "Введите последовательность символов:\n";
    for (int i = 0; i < 8; i++)
    {
        cin >> sequence[i];
    }

    for (int i = 0; i < 8; i++)
    {
        cout << sequence[i];
    }
    cout << endl;
    char minSymbolIndex = 0;
    char minSymbol = sequence[0];

    char maxSymbolIndex = 0;
    char maxSymbol = sequence[0];

    for (int i = 0; i < 8; i++)
    {
        if (minSymbol > sequence[i])
        {
            minSymbol = sequence[i];
            minSymbolIndex = i;
        }
        if (maxSymbol < sequence[i])
        {
            maxSymbol = sequence[i];
            maxSymbolIndex = i;
        }
    }

    
    char modifiedSequence[8];
    copy(begin(sequence), end(sequence), begin(modifiedSequence));

    cout << "Восьмеричные коды исходной последовательности: ";
    for (char c : sequence)
    {
        cout << oct << static_cast<int>(c) << " ";
    }
    cout << endl;
    modifyBits(modifiedSequence, minSymbolIndex, maxSymbolIndex);
    cout << "Восьмеричные коды преобразованной последовательности: ";
    for (char c : modifiedSequence)
    {
        cout << oct << static_cast<int>(c) << " ";
    }
    cout << endl;

    return 0;
}

void modifyBits(char *sequence, int minIndex, int maxIndex)
{
    char minChar = sequence[minIndex];
    char maxChar = sequence[maxIndex];
    char modifiedMinChar = minChar | (1 << 3);
    char modifiedMaxChar = maxChar & ~(1 << 2);
    sequence[minIndex] = modifiedMinChar;
    sequence[maxIndex] = modifiedMaxChar;
}