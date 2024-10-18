#include <iostream>

using namespace std;

int main() {
	int opcion = 0;
	float a, b;
	
	cout<<"\n1. Sumar dos numeros \n2. Multiplicar dos numeros \n3. Dividir dos numeros\n\n";
	cout<<"Ingrese una opcion: ";
	
	cin>>opcion;
	
	switch ( opcion ) {
		case 1:
			cout<<"Ingresa el primer numero: ";
			cin>>a;
			cout<<"Ingresa el segundo numero: ";
			cin>>b;
			cout<<"\nLa suma es: "<<a + b;
			break;
		case 2:
			cout<<"Ingresa el primer numero: ";
			cin>>a;
			cout<<"Ingresa el segundo numero: ";
			cin>>b;
			cout<<"\nLa multiplicacion es: "<<a * b;
			break;
		case 3:
			cout<<"Ingresa el primer numero: ";
			cin>>a;
			cout<<"Ingresa el segundo numero: ";
			cin>>b;
			cout<<"\nLa division es: "<<a / b;
			break;
		case 4:
			cout<<"\nOpcion invalida";
			break;
	}
	
	return 0;
}
