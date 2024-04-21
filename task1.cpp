#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y;
    x = 0;
    y = 0;

    cin >> x;
    cin >> y;

    cout << log(pow(y, -sqrt(abs(x)))) * (sin(x) + exp(x + y)) << '\n';
    return 0;
}