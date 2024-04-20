#include "tasks.h"

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
