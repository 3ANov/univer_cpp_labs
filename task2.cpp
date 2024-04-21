#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y;
    x = 0;
    y = 0;

    cin >> x;
    cin >> y;

    if (x * y > 0)
    {
        cout << pow(x + y, 2) - sqrt(x * y) << "\n";
    }
    else if (x * y < 0)
    {
        cout << pow(x + y, 2) + sqrt(abs(x * y));
    }
    else
    {
        cout << pow((x + y), 2) + 1 << "\n";
    }

    return 0;
}