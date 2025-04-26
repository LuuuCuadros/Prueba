#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite un numero entero impar mayor o igual a 5: ";
    cin >> n;

    if (n < 5 || n % 2 == 0) {
        cout << "Digite un numero entero impar mayor o igual a 5." << endl;
        return 1;
    }
    cout << "* ";
    
    for (int i = 0; i < n - 2; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "* *" << endl;

    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    cout << "  * *" << endl;

    for (int i = 0; i < n - 2; i++) {
        cout << "*";
    }
    cout << " *" << endl;

    return 0;
}