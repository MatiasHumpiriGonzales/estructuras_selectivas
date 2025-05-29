#include <iostream>
using namespace std;
int main() {
    int dividendo, divisor, cociente = 0;    
    cout << "Ingrese el dividendo: ";
    cin >> dividendo;
    cout << "Ingrese el divisor: ";
    cin >> divisor;
    if (dividendo >= 0 && divisor > 0) {
        while (dividendo >= divisor) {
            dividendo = dividendo - divisor;
            cociente++;
        }
        cout << "El cociente es: " << cociente << endl;
    } else {
        cout << "Error: Los números deben ser positivos y el divisor mayor a 0." << endl;
    }
    return 0;
}

