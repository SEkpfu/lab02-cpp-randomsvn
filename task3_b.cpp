#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    if (x == 1)
    {
        cout << "Не числовой результат ";
    }

    if (x <= -2)
    {
        return 0;
    }
    else if (x > 0)
    {
        return 1 / (pow(x, 2) + 4 * x - 5);
    }
    else 
    {
        return pow(x, 2) + 4 * x + 5;
    }
}

int main()
{
    double x;

    cout << "Введите x "; cin >> x;
    cout << f(x);

    return 0;
}