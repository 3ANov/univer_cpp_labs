#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

vector<vector<int>> randInitializeMatrix(int rowCount, int columnCount);
void printMatrix(vector<vector<int>> &matrix);
void averageStringInMatrix(vector<vector<int>> &matrix, vector<float> b_array);

int main()
{
    vector<vector<int>> matrix = randInitializeMatrix(5, 4);
    printMatrix(matrix);
    vector<float> b(5);
    return 0;
}

vector<vector<int>> randInitializeMatrix(int rowCount, int columnCount)
{
    srand(time(0));
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
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;
}

void averageStringInMatrix(vector<vector<int>> &matrix, vector<float> b_array)
{
    int rowCount = matrix.size();
    int columnCount = matrix[0].size();

    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < columnCount; j++)
        {
            // if (matrix[i][j] != 0)
            
        }
        cout << "\n";
    }
    cout << endl;
}

bool isNegativeString(vector<int> &matrix_string)
{
    for (int item: matrix_string){
        if (item < 0) return true;
    }
    return false;
}