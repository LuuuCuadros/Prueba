#include <iostream>
using namespace std;

void Patron(int n) {
    if (n < 5 || n % 2 == 0) {
        cout << "n debe ser impar y mayor o igual a 5" << endl;
        return;
    }
    
    int mid = n / 2;
    
    for (int i = 0; i < mid + 1; i++) {
        cout << "*";
    }
    cout << endl;
    
    cout << "*";
    for (int i = 0; i < mid - 1; i++) {
        cout << " ";
    }
    cout << "*" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
    
    for (int i = 0; i < mid - 1; i++) {
        cout << " ";
    }
    cout << " *";
    for (int i = 0; i < mid - 1; i++) {
        cout << " ";
    }
    cout << "*" << endl;
    
    for (int i = 0; i < mid - 1; i++) {
        cout << " ";
    }
    cout << " ";
    for (int i = 0; i < mid + 1; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese un numero impar mayor o igual a 5: ";
    cin >> n;
    
    Patron(n);
    
    return 0;
}