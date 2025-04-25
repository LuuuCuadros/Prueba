#include <iostream>
using namespace std;

void imprimirHoriz(int n) {
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;
}

void imprimirDiag(int n) {
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n - 1 - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void imprimirPatronZ(int n) {
    if (n < 3 || n % 2 == 0) {
        cout << "n debe ser impar y mayor o igual a 3" << endl;
        return;
    }
    
    imprimirHoriz(n);
    
    imprimirDiag(n);
    
    imprimirHoriz(n);
}

int main() {
    int n;
    cout << "Ingrese un numero impar mayor o igual a 3: ";
    cin >> n;
    imprimirPatronZ(n);
    return 0;
}