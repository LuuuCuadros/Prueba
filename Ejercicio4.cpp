#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Digite un numero entero impar mayor o igual a 5: ";
    cin >> n;
    
    if (n < 5 || n % 2 == 0) {
        cout << "Numero invalido, digite un numero entero impar mayor o igual a 5." << endl;
        return 1;
    }
    
    for (int i = 0; i < n-3; i++) {
        cout << "*";
    }
    cout << "  *" << endl;
    
    cout << " ";
    for (int i = 0; i < n-4; i++) {
        cout << "*";
    }
    cout << " **" << endl;
    
    cout << "  ";
    for (int i = 0; i < n-2; i++) {
        cout << "*";
    }
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    
    for (int i = 0; i < n-2; i++) {
        cout << "*";
    }
    cout << "  " << endl;
    
    cout << "** ";
    for (int i = 0; i < n-4; i++) {
        cout << "*";
    }
    cout << " " << endl;
    
    cout << "*  ";
    for (int i = 0; i < n-3; i++) {
        cout << "*";
    }
    cout << endl;
    
    return 0;
}