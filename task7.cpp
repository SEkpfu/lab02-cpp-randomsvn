#include <iostream>
using namespace std;

int main()
{
    double a,b;
    char sign;
    cout << "Введите число a "; cin >> a;
    cout << "Введите число b "; cin >> b;
    cout << "Введите знак операции "; cin >> sign;

    switch (sign)
    {
        case '+':
        {
            cout << a + b;
            break;
        }

        case '-':
        {
            cout << a - b; 
            break;
        }
        case '*':
        {
            cout << a * b;
            break;
        }
        case '/':
        {
            cout << a / b;
            break;
        }

        default:
        {
            cout << "Неизвестный знак";
        }
    }

    return 0;

}