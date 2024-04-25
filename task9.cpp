#include <iostream>
#include <algorithm>
using namespace std;

void printArray(char *array, int arraySize);
int filter(char *oldArray, int oldArraySize, bool (*predicate)(char), char *filteredArray);
bool isDigit(char ch);

int main()
{
    int size = 0;

    cout << "Введите набор символов:\n";
    char *oldArray = nullptr;

    char temp;
    while (cin.get(temp) && temp != '\n')
    {
        char *tempArray = new char[size + 1];
        copy(oldArray, oldArray + size, tempArray);
        tempArray[size] = temp;
        delete[] oldArray;
        oldArray = tempArray;
        size++;
    }

    char *filteredArray = new char[size];
    printArray(oldArray, size);
    int new_size = filter(oldArray, size, isDigit, filteredArray);

    printArray(filteredArray, new_size);
    delete[] oldArray;
    delete[] filteredArray;
    return 0;
}

int filter(char *oldArray, int oldArraySize, bool (*predicate)(char), char *filteredArray)
{
    int sizeNewArray = 0;
    for (int i = 0; i < oldArraySize; i++)
    {
        if (predicate(oldArray[i]))
        {
            filteredArray[sizeNewArray] = oldArray[i];
            sizeNewArray++;
        }
    }
    
    return sizeNewArray;
}

void printArray(char *array, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << "";
    }
    cout << endl;
}

bool isDigit(char ch)
{
    return (ch >= '0' && ch <= '9') ? true : false;
}