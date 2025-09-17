#include <iostream>
#include <cmath>
using namespace std;

double p(double x)
{
    if (x <= -10)
    {
        return (12 + (5.0/7.0));
    }
    else if (x > 0)
    {
        return cos(M_PI * (x + 1));
    }
    else 
    {
        return sqrt(abs(10 - x*x));
    }
}

int main()
{
    double x;
    cout << "Введите x "; cin >> x;
    cout << p(x);

    return 0;
}