#include <iostream>
using namespace std;
int main (){
	int a, b, c;
	cout << "Indique el valor del lado a: ";
	cin >> a;
	cout << "Indique el valor del lado b: ";
	cin >> b;
	cout << "Indique el valor del lado c: ";
	cin >> c;
	if (a > b - c && a < b + c){
		if (b > a - c && b < a + c){
			if (c > a - b && c > b+a){
				cout << "Es un triangulo":
			}
		}
	}
	else {
		cout << "No es triangulo"
	}
	return 0;
}
