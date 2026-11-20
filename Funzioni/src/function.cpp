#include "../include/function.h"
#include <cmath>

const double PI = 3.14159265358979323846;

using namespace std;

//FUNZIONE 1

double Function1::value(double x, double y) const {
    return ((pow(x,2)+pow(y,2))/2);
}
double Function1::dx(double x, double y) const {
    return x;
}
double Function1::dy(double x, double y) const {
    return y;
}

//FUNZIONE 2

double Function2::value(double x, double y) const {
    return ((pow(x,2)+16*pow(y,2))/2);
}
double Function2::dx(double x, double y) const {
    return x;
}
double Function2::dy(double x, double y) const {
    return (16*y);
}

//FUNZIONE 3

double Function3::value(double x, double y) const {
    return (pow(pow(x,2)-1,2)+pow(y,2));
}
double Function3::dx(double x, double y) const {
    return (4*x*(pow(x,2)-1));
}
double Function3::dy(double x, double y) const {
    return (2*y);
}

//FUNZIONE 4

double Function4::value(double x, double y) const {
    return (pow(pow(x,2)-1,2)+(pow(x-1,2)/5)+pow(y,2));
}
double Function4::dx(double x, double y) const {
    return ((4*x*(pow(x,2)-1))+((2*(x-1))/5));
}
double Function4::dy(double x, double y) const {
    return (2*y);
}

//FUNZIONE 5

double Function5::value(double x, double y) const {
    return (4*pow(sinh(x/2),2)+pow(y,2));
}
double Function5::dx(double x, double y) const {
    return (2*sinh(x));
}
double Function5::dy(double x, double y) const {
    return (2*y);
}

//FUNZIONE 6

double Function6::value(double x, double y) const {
    return (log(1+pow(x,2)+pow(y,2)));
}
double Function6::dx(double x, double y) const {
    return ((2*x)/(1+pow(x,2)+pow(y,2)));
}
double Function6::dy(double x, double y) const {
    return ((2*y)/(1+pow(x,2)+pow(y,2)));
}

//FUNZIONE 7

double Function7::value(double x, double y) const {
    return (1-exp(-(pow(x,2)+pow(y,2))));
}
double Function7::dx(double x, double y) const {
    return (2*x*exp(-(pow(x,2)+pow(y,2))));
}
double Function7::dy(double x, double y) const {
    return (2*y*exp(-(pow(x,2)+pow(y,2))));
}

//FUNZIONE 8

double Function8::value(double x, double y) const {
    return (2-cos(PI*x)-cos(PI*y));
}
double Function8::dx(double x, double y) const {
    return (PI*sin(PI*x));
}
double Function8::dy(double x, double y) const {
    return (PI*sin(PI*y));
}