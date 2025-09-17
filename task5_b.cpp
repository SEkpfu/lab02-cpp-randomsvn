#include <iostream>

using namespace std;

int main()
{
    double x, y, z, a, b;
    cout << "Введите величины: " << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    if (x <= a && y <= b)
    {
        cout << "Да";
    }


    return 0;
}