#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingresa un numero entero (1 = Domingo, 2 = Lunes, ..., 7 = Sabado): ";
    cin >> numero;
    if (numero < 1) {
        cout << "Numero invalido. Debe ser mayor o igual a 1." << endl;
    } else {
        int dia = (numero - 1) % 7 + 1;
        switch (dia) {
            case 1:
                cout << "Martes" << endl;
                break;
            case 2:
                cout << "Miercoles" << endl;
                break;
            case 3:
                cout << "Jueves" << endl;
                break;
            case 4:
                cout << "Viernes" << endl;
                break;
            case 5:
                cout << "Sabado" << endl;
                break;
            case 6:
                cout << "Domingo" << endl;
                break;
            case 7:
                cout << "Lunes" << endl;
                break;
        }
    }
    return 0;
}

