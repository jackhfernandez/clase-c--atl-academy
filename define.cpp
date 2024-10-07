#include <iostream>

#define multiplicacion(a, b) a*b
#define elevado(a) a*a

using namespace std;


int main() {
	int Multiplicacion = multiplicacion(7,8);
	cout<<Multiplicacion<<"\n";
	
	int Elevado = elevado(4);
	cout<<Elevado;
	
	return 0;
}
