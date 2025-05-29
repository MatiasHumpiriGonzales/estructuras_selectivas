#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese la cantidad de terminos de la serie de Fibonacci: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Los terminos son: ";
    for (int i = 0; i < n; i++) {
        cout << a; 
        if (i < n - 1) {
        cout << " , ";
		}
        int siguiente = a + b; 
        a = b; 
        b = siguiente; 
    }
    cout << endl;
    return 0;
}

