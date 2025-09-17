#include <iostream>

using namespace std;

int main()
{
    double r, a, b, z, c;
    cout << "Введите r торта "; cin >> r;
    cout << "Введите сторону коробки a "; cin >> a;
    cout << "Введите сторону коробки b "; cin >> b;
    cout << "Введите высоту торта z "; cin >> z;
    cout << "Введите высоту коробки c "; cin >> c;

    if (2 * r <= a && 2 * r <= b)
    {
        cout << "Уместится без учета высот" << endl;
        if (z <= c)
        {
            cout << "Уместится с учетом высот";
        }
    }
    else 
    {
        cout << "Нет";
    }


    return 0;
}