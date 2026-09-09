#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

int main(){
    double t;
    double v;
    double i;
    double f;
    double xc;
    double pi = M_PI;
    std::cout << "Enter value of frequency, f: ";
    std::cin >> f;
    std::cout << "\nEnter value of t: ";
    std::cin >> t;
    xc = 2*pi*f*200*(std::pow(10, -6));
    if(t < 0)
    v = 0;
    else if(t < 1)
    v = 50*t;
    else if(t < 3)
    v = 100 - 50*t;
    else if(t < 4)
    v = -200 +50*t;
    else
    v = 0;

    i = v/xc;
    std::cout << "When t = " << t << "s\nI = " << i << "A\n";
    
    return 0;
}