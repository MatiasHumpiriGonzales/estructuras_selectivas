#include <iostream>
using namespace std;
int main() {
	int camisa, precio, descuento;
	cout << "Indique el precio pagado inicialmente: ";
	cin >> precio;
	cout << "Indique la cantidad de camisas: ";
	cin >> camisa;
	if ( camisa >= 4){
		descuento = precio - (0.2 * precio);
	}
	else if (camisa >= 0 && camisa < 4) {
		descuento = precio - (0.1 * precio);
	}
	cout << "El precio final sera: " << descuento + 1 << endl;
	return 0;
}
