#include "tasks.h"

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