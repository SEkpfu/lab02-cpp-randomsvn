#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z;
    cout << "Введите стороны: \n";
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z; 


    if ( (x < y + z) && (y < x + z) && (z < x + y) )
    {
        cout << "Существует" << endl;
        if (x == y && y == z)
        {
            cout << "Равносторонний" << endl;
        }
        else if ( (x == y) || (x == z) || (y == z) )
        {
            cout << "Равнобедренный" << endl;
        }
        if  ( ( pow(max(max(x, y), z), 2) - pow( min(min(x, y), z), 2) == pow(x, 2)) \
         || ( pow(max(max(x, y), z), 2) - pow( min(min(x, y), z), 2) == pow(y, 2)) \
          || ( pow(max(max(x, y), z), 2) - pow( min(min(x, y), z), 2) == pow(z, 2)) )
        {
            cout << "Прямоугольный" << endl;
        }

    }
    else
    {
        cout << "Не существует";
    }


    return 0;
}