#include <iostream>
using namespace std;

int main()
{
    int day_born, month_born, year_born;
    int day_curr, month_curr, year_curr;
    int age;

    cout << "Введите дату рождения: \n";
    cout << "День "; cin >> day_born;
    cout << "Месяц "; cin >> month_born;
    cout << "Год "; cin >> year_born;

    cout << "Введите текущую дату: \n";
    cout << "День "; cin >> day_curr;
    cout << "Месяц "; cin >> month_curr;
    cout << "Год "; cin >> year_curr;

    if (month_curr > month_born)
    {
        age = year_curr - year_born;
    }
    else if (month_curr == month_born)
    {
        if (day_curr >= day_born)
        {
            age = year_curr - year_born;
        }
        else 
        {
            age = year_curr - year_born - 1;
        }
    }
    else 
    {
        age = year_curr - year_born - 1;
    }


    if ( (age % 10 == 0 || age%10 >= 5) || (age >=10 && age <= 19) )
    {
        cout << "Вам " << age << " лет";
    }
    else if (age % 10 == 1)
    {
        cout << "Вам " << age << " год";
    }
    else
    {
        cout << "Вам " << age << " года";
    }

    return 0;
}