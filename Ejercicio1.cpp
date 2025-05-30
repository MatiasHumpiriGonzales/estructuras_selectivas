#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3, promedio;
	cout << "Indique el valor de la nota1 (del 0 al 100): ";
	cin >> num1;
	cout << "Indique el valor de la nota2 (del 0 al 100): ";
	cin >> num2;
	cout << "Indique el valor de la nota3 (del 0 al 100): ";
	cin >> num3;
	promedio = (num1 + num2 +num3) / 3;
	if (promedio >= 80){
		cout << "APROBADO";
	}
	else {
		cout << "DESAPROBADO";
	}
	return 0;
}
