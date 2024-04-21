#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

vector<float> randInitializeArray(int arraySize);
vector<float> initializeArray();

void printArray(vector<float> &numbers);
float sumArray(vector<float> &numbers);
void modificateArray(vector<float> &numbers, float a_htrix);


int main()
{
    int count = 15;
    vector<float> a_array = randInitializeArray(count);
    // vector<float> a_array = initializeArray();

    printArray(a_array);
    float a_htrix = (1 / 15) * sumArray(a_array);
    modificateArray(a_array, a_htrix);
    // printArray(a_array);
    float result = sqrt(sumArray(a_array)/14);
    cout << "Результат: " << result << '\n';
    return 0;
}


vector<float> randInitializeArray(int arraySize)
{
    srand(time(0));
    vector<float> array(arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = 0.1 * (rand() % 91 + 10);
    }

    return array;
}


vector<float> initializeArray()
{
    
    return vector<float> {0.652, 3.214, 1.897, 5.321, 2.109, 7.005, 4.312, 6.789, 8.123, 9.876, 10.543, 12.345, 11.234, 13.789, 14.567};
}


void printArray(vector<float> &numbers)
{

    for (float item: numbers)
    {
        cout << item << "\t";
    }
    cout << endl;
}

float sumArray(vector<float> &numbers)
{
    float result = 0;
    for (float item: numbers)
    {
        result += item;
    }
    return result;
}

void modificateArray(vector<float> &numbers, float a_htrix)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        numbers[i] = pow((numbers[i] - a_htrix), 2);
    }

}
