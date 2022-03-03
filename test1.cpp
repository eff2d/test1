#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "Vvedite 1 chislo ";
    cin >> a;
    cout << "Vvedite 2 chislo ";
    cin >> b;
    if (a < 10 && b < 10) {
        int c = a + b;
        cout << "summa =" << c << endl;
    }
    else if (a > 10 || b > 10) {
        cout << "error error error alarm alarm alarm >:O" << endl;
    }
    return 0;
}