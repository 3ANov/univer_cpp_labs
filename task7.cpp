#include <iostream>
using namespace std;

int **randInitializeMatrix(int matrixSize);
int **nullInitializeMatrix(int matrixSize);
void printMatrix(int **matrix, int matrixSize);
void deleteMatrix(int **matrix, int matrixSize);
void multiplyMatrix(int **matrix_a, int **matrix_b, int **matrix_c, int matrixSize);

int main()
{
    srand(time(0));
    int matrixSize = 0;
    cout << "Введите размеры матриц: ";
    cin >> matrixSize;
    int** matrix_a = randInitializeMatrix(matrixSize);
    int** matrix_b = randInitializeMatrix(matrixSize);
    int** matrix_c = nullInitializeMatrix(matrixSize);
    cout << matrix_a << "\n";
    cout << matrix_b << "\n";
    cout << matrix_c << "\n";
    
    printMatrix(matrix_a, matrixSize);
    printMatrix(matrix_b, matrixSize);

    multiplyMatrix(matrix_a, matrix_b, matrix_c, matrixSize);
    printMatrix(matrix_c, matrixSize);

    deleteMatrix(matrix_a, matrixSize);
    deleteMatrix(matrix_b, matrixSize);
    deleteMatrix(matrix_c, matrixSize);
    return 0;
}

int **randInitializeMatrix(int matrixSize)
{    
    int **heapMatrix = new int *[matrixSize];
    for (int i = 0; i < matrixSize; i++)
    {
        *(heapMatrix + i) = new int[matrixSize];
        for (int j = 0; j < matrixSize; j++)
        {
            *(*(heapMatrix + i) + j) = rand() % 41 - 20;
            // один из вариантов обращения к элементам
            // но вообще можно и heapMatrix[i][j]
        }
    }

    return heapMatrix;
}

int **nullInitializeMatrix(int matrixSize)
{
    int **heapMatrix = new int *[matrixSize];
    for (int i = 0; i < matrixSize; i++)
    {
        *(heapMatrix + i) = new int[matrixSize];
        for (int j = 0; j < matrixSize; j++)
        {
            *(*(heapMatrix + i) + j) = 0;
        }
    }

    return heapMatrix;
}

void printMatrix(int **matrix, int matrixSize)
{
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl;
}

void deleteMatrix(int **matrix, int matrixSize)
{
    for (int i = 0; i < matrixSize; i++)
    {
        delete[] *(matrix + i);
        *(matrix + i) = nullptr;
    }

    delete[] matrix;
    matrix = nullptr;
}

void multiplyMatrix(int **matrix_a, int **matrix_b, int **matrix_c, int matrixSize)
{
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = 0; j < matrixSize; j++)
        {
            for (int k = 0; k < matrixSize; k++)
            {
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}
