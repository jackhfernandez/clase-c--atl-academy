#include <iostream>
using namespace std;

// Aqui se declaran las estructuras
struct pokemon {
	// Variables de mi estructura
	char nombre[50];
	char tipo[50];
	float peso;
	char genero;	
}pokemon1;  // Esto es una variable  de tipo estructura

int main(){
	cout<<"Ingrese el nombre de su pokemon: "<<endl;
	cin.getline(pokemon1.nombre, 50, '\n');
	cout<<"Ingrese el tipo de pokemon: "<<endl;
	cin.getline(pokemon1.tipo, 50, '\n');
	cout<<"Ingrese el peso del pokemon: "<<endl;
	cin>>pokemon1.peso;
	cout<<"Ingrese el genero del pokemon: "<<endl;
	cin>>pokemon1.genero;
	
	cout<<"Nombre del pokemon "<<pokemon1.nombre<<endl;
	cout<<"Tipo del pokemon "<<pokemon1.tipo<<endl;
	cout<<"Peso del pokemon "<<pokemon1.peso<<endl;
	cout<<"Genero del pokemon "<<pokemon1.genero<<endl;
	
	return 0;
}