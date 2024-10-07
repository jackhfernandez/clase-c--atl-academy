#include <iostream>

using namespace std;

int main() {
	int large = 0, a = 0, sum = 0;
	
	cout<<"Por favor digita cuantas notas quieres registrar: ";
	cin>>large;
	
	int grades [large];
	
	for (int x = 0; x < large; x++) {
		cout<<"Ingresa la nota #"<<x+1<<": ";
		cin>>a;
		grades[x] = a;
		sum += grades[x];
	}
	
	cout<<"Tu promedio es: "<<(float)sum/ large;
	
	return 0;
}
