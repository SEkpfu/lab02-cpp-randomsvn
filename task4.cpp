#include <iostream>

using namespace std;

int main() {

     int  dM, dW; 
  cout << "Введите дату: "; 
  cout << "День месяца: ";   
  cin >> dM; 
  cout << "Номер дня в неделе: ";   
  cin >> dW;

    if (13 == dM)
    {
        if (5 == dW)
        {
            cout << "неудачный день";
        }
        else 
        {
            if (2 == dW)
            {
                cout << "неудачный день";
            }
        }
    }
    if (17 == dM)
    {
        if (5 == dW)
        {
            cout << "неудчаный день";
        }
    }


    return 0;
}