#include <iostream>
using namespace std;

int main() {
    int multiplicando;
    cout << "Ingrese un número para calcular su tabla de multiplicar: ";
    cin >> multiplicando;
    cout << "Tabla de multiplicar del " << multiplicando << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        int producto = multiplicando * i;
        cout << multiplicando << " * " << i << " = " << producto << endl;
    }

    return 0;
}
