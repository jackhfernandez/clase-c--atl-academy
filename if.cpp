#include <iostream>

using namespace std;

int main(){
	int edad = 0;
	cout<<"Por favor ingresa tu edad: ";
	cin>>edad;
	
	if (edad < 18) {
		cout<<"Aun no puedes ingresar";
	} else {
		cout<<"Bienvenido";
	}
	
	return 0;
}
