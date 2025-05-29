#include <iostream>
using namespace std;
int main() {
    int n, suma = 0, numero = 1, contador = 0;
    cout << "Ingrese la cantidad de numeros impares a sumar: ";
    cin >> n;
    while (contador < n) {
        suma = suma + numero;   
        numero = numero + 2;       
        contador++;        
    }
    cout << "La suma de los primeros " << n << " numeros impares es: " << suma << endl;
    return 0;
}

