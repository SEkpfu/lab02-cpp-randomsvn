#include <iostream> 
using namespace std; 
int main() 
{ 
 setlocale(0, ""); 
      int x;  
 cout << "введите свою оценку: ";  
 cin >> x; 
 switch (x) { 
     case 5: cout << "отлично"; break; 
     case 4: cout << "хорошо" << endl; 
     case 3: cout << "удовлетворительно"; break; 
 
     case 2: 
     case 1: cout << "плохо ";  break; 
     default: cout << "неверныe данные"; 
 } 
 
 return 0; 
}