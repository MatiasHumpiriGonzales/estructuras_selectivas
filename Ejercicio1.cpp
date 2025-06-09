#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3, promedio;
	do{
	cout << "Indique el valor de la primera nota (del 0 al 100): ";
	cin >> num1;
	if(num1<0 or num1>100){
		cout<<"Numero invalido, intente nuevamente."<<endl;
	}
	}while(num1<0 or num1>100);
	do{
	cout << "Indique el valor de la segunda nota (del 0 al 100): ";
	cin >> num2;
	if(num2<0 or num2>100){
		cout<<"Numero invalido, intente nuevamente."<<endl;
	}
	}while(num2<0 or num2>100);
	do{
	cout << "Indique el valor de la tercera nota (del 0 al 100): ";
	cin >> num3;
	if(num3<0 or num3>100){
		cout<<"Numero invalido, intente nuevamente."<<endl;
	}
	}while(num3<0 or num3>100);
	promedio = (num1 + num2 +num3) / 3;
	if (promedio >= 80){
		cout << "Promedio: "<<promedio<<endl<<"APROBADO";
	}
	else {
		cout << "Promedio: "<<promedio<<endl<< "DESAPROBADO";
	}
	return 0;
}
