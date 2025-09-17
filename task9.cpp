#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    cout << "Координата x: "; cin >> x;
    cout << "Координата y: "; cin >> y;


    cout << "a) ";
    if (( (x >= -2) && (x <= 0) ) && ((y >= 0) && (x <= 1)))
    {
        cout << "Принадлежит" << endl;
    }
    else
    {
        cout << "Не принадлежит" << endl;
    }


    cout << "b) ";
    if (y >= 0)
    {
        if (sqrt((x * x + y * y)) <= 5)
        {
            cout << "Принадлежит" << endl;
        }
        else
        {
            cout << "Не принадлежит" << endl;
        }
    }
    else
    {
        cout << "Не принадлежит" << endl;
    }


    cout << "c) ";
    if (x >= 0)
    {
        if (sqrt(x * x + y * y) < 3)
        {
            cout << "Не принадлежит" << endl;
        }
        else if (sqrt(x * x + y * y) > 6)
        {
            cout << "Не принадлежит" << endl;
        }
        else 
        {
            cout << "Принадлежит" << endl;
        }
    }
    else
    {
        cout << "Не принадлежит" << endl;
    }


    cout << "d) ";
    if (x >= 0 && y >= 0)
    {
        if (y <= -2 * x + 2)
        {
            cout << "Принадлежит" << endl; 
        }
        else
    {
        cout << "Не принадлежит" << endl;
    }
    }
    else 
    {
        cout << "Не принадлежит";
    }

    return 0;

}