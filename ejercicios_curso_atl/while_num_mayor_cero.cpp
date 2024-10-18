#include <iostream>

using namespace std;

int main() {
	int a = 0;
	
	cout<<"Ingrese un numero mayor que 10: ";
	cin>>a;
	
	while (a <= 10) {
		cout<<a<<" no es un numero mayor que 10. Intentalo de nuevo: ";
		cin>>a;
	}
	
	cout<<"Perfecto "<<a<<" es mayor que 10.";
	
	return 0;
}
