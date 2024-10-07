#include <iostream>

using namespace std;

void mensaje(string a="Hola mundo");

int main() {
	
	mensaje("Te quiero mucho");
	
	return 0;
}

void mensaje(string mensaje) {
	cout<<mensaje;
}
