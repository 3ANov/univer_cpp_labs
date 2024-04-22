#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<vector<int>> randInitializeMatrix(int rowCount, int columnCount);
void printMatrix(vector<vector<int>> &matrix);
void getAverageValueForRow(vector<vector<int>> &matrix, vector<float> &b_array);
void printArray(vector<float> &numbers);

int main()
{
    srand(time(0));
    vector<vector<int>> matrix = randInitializeMatrix(5, 4);
    printMatrix(matrix);
    vector<float> b(5);
    getAverageValueForRow(matrix, b);
    printArray(b);
    return 0;
}

vector<vector<int>> randInitializeMatrix(int rowCount, int columnCount)
{
    vector<vector<int>> matrix(rowCount, vector<int>(columnCount));
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {

            matrix[i][j] = rand() % 41 - 20;
        }
    }

    return matrix;
}

void printMatrix(vector<vector<int>> &matrix)
{
    int rowCount = matrix.size();
    int columnCount = matrix[0].size();
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;
}

void printArray(vector<float> &numbers)
{

    for (float item : numbers)
    {
        cout << item << "\t";
    }
    cout << endl;
}

void getAverageValueForRow(vector<vector<int>> &matrix, vector<float> &b_array)
{
    int rowCount = matrix.size();
    int columnCount = matrix[0].size();

    for (int i = 0; i < rowCount; i++)
    {
        int countNegativeElement = 0;
        int countNotNullElement = 0;
        float sumRow = 0;
        for (int j = 0; j < columnCount; j++)
        {
            if (matrix[i][j] < 0)
            {
                countNegativeElement += 1;
            }
            if (matrix[i][j] != 0)
            {
                countNotNullElement += 1;
                sumRow += matrix[i][j];
            }
        }
        if (countNegativeElement)
        {
            b_array[i] = sumRow / countNotNullElement;
        }
        // cout << sumRow << " " << countNotNullElement << "\n";
        // cout << "\n";
    }
    cout << endl;
}
