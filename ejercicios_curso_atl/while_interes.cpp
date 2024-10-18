/*
Calculadora de
interes compuest
*/

#include <iostream>
#include <conio.h>
#include <locale>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
	
	float Ci = 0;
	float Ti = 0;
	int t = 0;
	float resultado = 0;
	
	while (Ci <= 0) {
		cout<<"Ingrese el capital inicial: ";
		cin>>Ci;
	}
	
	while (Ti <= 0) {
		cout<<"Ingrese el interes anual: ";
		cin>>Ti;
	}
	
	while (t <= 0) {
		cout<<"Ingrese el tiempo en años: ";
		cin>>t;
	}
	
	resultado = Ci * pow(( 1 + (Ti / 100)), t );
	
	cout<<"El dinero generado es $ "<<resultado;
	
	getch();
	return 0;
}
