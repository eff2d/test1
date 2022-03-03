#include <iostream> 
using namespace std;

int main()
{
    setlocale(0, "");
    int i;
    int sum = 0;
    int a, b;
    cout << "Vvedite 1 chislo ";
    cin >> a;
    cout << "Vvedite 2 chislo ";
    cin >> b;
    if (a > 0 && b <= 1000) {
        for (i = a; i <= b; i++) {
            sum = sum + i;
        }
        cout << "summa =" << sum << endl;
    }
    else if (a <= 0 || b > 1000) {
        cout << "error error error alarm alarm alarm >:O" << endl;
    }
    return 0;
}