#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Введите целое число "; cin >> x;
    
    if ( (x% 10 == 0 || x % 10 >= 5) || (x>=10 && x<= 19) )
    {
        cout << "Джек утопил " << x << " кораблей";
    }
    else if (x% 10 == 1)
    {
        cout << "Джек утопил " << x << " корабль";
    }
    else
    {
        cout << "Джек утопил " << x << " корабля";
    }

    return 0;
}