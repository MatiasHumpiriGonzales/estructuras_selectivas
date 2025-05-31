#include <iostream>
using namespace std;
int main (){
	int a, b, c, d, mayor;
	cout << "Indique el valor del primer numero: ";
	cin >> a;
		cout << "Indique el valor del segundo numero: ";
	cin >> b;
		cout << "Indique el valor del tercer numero: ";
	cin >> c;
	cout << "Indique el valor del cuarto numero: ";
	cin >> d;
	if (a > b && a > c && a > d){
		mayor = a;
	}
	else if (b > a && b > c && b > d){
		mayor = b;
	}
	else if (c > a && c > b && c > d){
		mayor = c;
	}
	else {
		mayor = d;
	}
	cout << "El mayor numero es: " << mayor;
	return 0;
}
