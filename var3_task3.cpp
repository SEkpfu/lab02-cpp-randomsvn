#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "Введите x "; cin >> x;
    cout << "Введите y "; cin >> y;

    if (x >= 0 && y >= 0)
    {
        if (y <= -2 * x + 4)
        {
            cout << "Попала";
        }
        else 
        {
            cout << "Не попала";
        }
    }

    else if (x >= 0 && y <= 0)
    {
        if (x <= 2 && y >= -4)
        {
            cout << "Попала";
        }
        else 
        {
            cout << "Не попала";
        }
    }
    
    else if (x <= 0 && y <= 0)
    {
        if (y >= -1 * x - 4)
        {
            cout << "Попала";
        }
        else 
        {
            cout << "Не попала";
        }

    }

    else if (x <= 0 && y >= 0)
    {
        if (sqrt(x * x + y * y) <= 4)
        {
            cout << "Попала";
        }
        else 
        {
            cout << "Не попала";
        }
    }

    else 
    {
        cout << "Не попала";
    }

    return 0;


}