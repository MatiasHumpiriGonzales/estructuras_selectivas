#include <iostream>
using namespace std;
int main() {
    int multiplicando, multiplicador, resultado = 0;
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicando;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;
    for (int i = 0; i < multiplicador; i++) {
        resultado = resultado + multiplicando;
    }
    cout << "El resultado de " << multiplicando << " x " << multiplicador << " es: " << resultado << endl;

    return 0;
}

