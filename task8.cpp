#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double x, y;
    cout << "Координата x: "; cin >> x;
    cout << "Координата y: "; cin>> y;
    
    if (sqrt((x * x + y * y)) <= 2)
    {
        cout << "10 очков";
    }
    else if (sqrt((x * x + y * y)) > 4)
    {
        cout << "0 очков";
    }
    else
    {
        cout << "5 очков";
    }
    
    return 0;
}