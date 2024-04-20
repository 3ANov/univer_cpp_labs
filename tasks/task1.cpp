#include "tasks.h"

double f1(double x, double y){
    return log(pow(y, -sqrt(abs(x)))) * (sin(x) + exp(x + y));
}