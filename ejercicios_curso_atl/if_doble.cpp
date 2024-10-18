#include <iostream>

using namespace std;

int main(){
	int horas = 0;
	cout<<"Por favor ingresa las horas laboradas: ";
	cin>>horas;
	
	if (horas < 5) {
		cout<<"Tu pago sera de 10 dolares";
	} else if ( horas > 5 && horas < 11) {
		cout<<"Tu pago sera de 15 dolares";
	} else if ( horas > 10 ) {
		cout<<"Tu pago sera de 20 dolares";
	}
	
	return 0;
}
