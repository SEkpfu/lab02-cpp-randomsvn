#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Введите целое число "; cin >> num;

    if (num<0)
    {
        cout << "Число отрицательно \n";
    }
    else if(num == 0)
    {
        cout << "Нуль \n";
    }
    else
    {
        cout << "Число положительно \n";
    }


    if (num%2==0)
    {
        cout << "Четное \n";
    }
    else{
        cout << "Нечетное \n";
    }

    return 0;
}