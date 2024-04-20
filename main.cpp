#include <iostream>
#include <cmath>
using namespace std;

double f1(double x, double y);
double f2(double x, double y);
void f3(double x_start, double x_end, double h);

int main(){
    double x, y;
    x = 0;
    y = 0;

    // cin >> x;
    // cin >> y;

    // cout << f1(x, y) << '\n';
    // cout << f2(x, y) << '\n';
    f3(-3.0, 0.0, 0.1);

    return 0;
}

double f1(double x, double y){
    return log(pow(y, -sqrt(abs(x)))) * (sin(x) + exp(x + y));
}

double f2(double x, double y){
    if (x * y > 0)
    {
        return pow(x + y, 2) - sqrt(x * y);
    }
    else if (x * y < 0)
    {
        return pow(x + y, 2) + sqrt(abs(x * y));
    }
    else
    {
        return pow((x + y), 2) + 1;
    }
}

void f3(double x_start, double x_end, double h){
    double y = 0;
    for (double x = x_start; x <= x_end; x += h)
    {
        if (x > -1)
        {
            y = 1 / ((x + 1) * sqrt(pow(x, 2) + 1));
            cout << x << '\t' << y << '\n';
        }
        else
        {
            y = (-pow(log(abs(x)), 3) + 3 * (pow(log(abs(x)), 2)) / 2 + 3 * log(abs(x)) / 2 + 3.0 / 4.0) / 2 * pow(x, 2);
            cout << x << '\t' << y << '\n';
        }
    }
}
