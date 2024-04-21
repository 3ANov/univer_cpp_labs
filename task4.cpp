#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
    float z1 = 0.45;
    float z2 = 0.17;
    float zK = 0;
    float zK_1 = z2;
    float zK_2 = z1;
    float result = 1;

    for (int i = 1; i <= 30; i++)
    {
        zK = 0.5 * sin(2 * zK_1) - 0.9 * cos(3 * zK_2);
        zK_2 = zK_1;
        zK_1 = zK;
        result *= zK;
    }
    cout << fixed << setprecision (20);  
    cout << setw(20) << result << '\n';
    
    return 0;
}
