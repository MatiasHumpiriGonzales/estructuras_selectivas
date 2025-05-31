#include <iostream>
using namespace std;
int main (){
	int a, b, c, mayor;
	cout << "Indique el valor del primer numero: ";
	cin >> a;
		cout << "Indique el valor del segundo numero: ";
	cin >> b;
		cout << "Indique el valor del tercer numero: ";
	cin >> c;
	if (a > b && a > c){
		mayor = a;
	}
	else if (b > a && b > c){
		mayor = b;
	}
	else {
		mayor = c;
	}
	cout << "El mayor numero es: " << mayor;
	return 0;
}
