#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");
     int a, b; 
    cout << "Введите первое число: ";
    cin >> a; 
    cout << "Введите второе число: ";
    cin >> b;
    /*12*/  int c = a + b; 
    cout << "Сумма чисел = " << c << endl; 
    return 0;
}