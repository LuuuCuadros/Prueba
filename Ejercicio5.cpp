#include <iostream>
using namespace std;

void PatronTriangular(int n) {
    if (n < 3 || n % 2 == 0) {
        cout << "n debe ser impar y mayor o igual a 3" << endl;
        return;
    }
    
    for (int i = 0; i < n-1; i++) {                
        cout << "* ";
    }
    cout << "*" << endl;
    
    for (int i = 1; i < n-1; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        
        cout << "*";
        
        for (int j = 0; j < 2*(n-i-2)+1; j++) {
            cout << " ";
        }
        
        cout << "*";
        
        for (int j = 0; j < 2*i-1; j++) {
            cout << " ";
        }
        
        cout << "*" << endl;
    }
    
    for (int i = 0; i < n-1; i++) {
        cout << " ";
    }
    for (int i = 0; i < n-1; i++) {
        cout << "* ";
    }
    cout << "*" << endl;
}

int main() {
    int n;
    
    cout << "Ingrese un numero impar mayor o igual a 3: ";
    cin >> n;
    
    PatronTriangular(n);
    
    return 0;
}