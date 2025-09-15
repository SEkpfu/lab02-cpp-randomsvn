#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int sum = 0;
    int even_counter = 0;
    int maximum, minimum, sum_of_all_numbers;


    cout << "Введите числа \n";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    sum_of_all_numbers = a + b + c;
    minimum = min( min(a, b), c);
    maximum = max( max(a, b), c);

    if (a > 10)
    {
        sum = sum + a;
    }
    if (a %2 == 0)
    {
        even_counter += 1;
    }


    if (b > 10)
    {
        sum = sum + b;
    }
    if (b % 2 == 0)
    {
        even_counter += 1;
    }


    if (c > 10)
    {
        sum = sum + c;
    }
    if (c % 2 == 0)
    {
        even_counter += 1;
    }

        cout << "Сумма чисел больших 10: " << sum << endl;
        cout << "Четных чисел: " << even_counter << endl;
        cout << "Среднее число: " << sum_of_all_numbers - maximum - minimum << endl;
        if (a == minimum)
        {
            cout << "Номер наименьшего числа: 1" << endl;
        }
        if (b == minimum)
        {
            cout << "Номер наименьшего числа: 2" << endl;
        }
        if (c == minimum)
        {
            cout << "Номер наименьшего числа: 3" << endl;
        }


    return 0;
}