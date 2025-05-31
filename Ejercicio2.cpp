#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "Ingrese el costo total: ";
	cin >> n;
	if (n > 2000){
		n = n - (0.2 * n);
			cout << "El costo final es: " << n + 1;
	}
	else { 
		cout << "El costo final es: " << n;
	}
	return 0;
}
