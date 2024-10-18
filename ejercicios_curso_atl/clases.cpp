#include <iostream>
using namespace std;

// Aqui van las clases
class Pokemon{
	// Estos son los atributos
	public:
		string nombre;
		float peso;
	// Estos son los metodos y el constructor
	public:
		Pokemon(string, float);
		void Saludo();
};

Pokemon::Pokemon(string _nombre, float _peso) {
	nombre = _nombre;
	peso = _peso;
}

void Pokemon::Saludo() {
	cout<<"El pokemon que te saluda es: "<<nombre<<" y el pesa "<<peso<< " kilogramos\n";
}

int main() {
	Pokemon pokemon1 = Pokemon("Chikorita", 0.75);
	pokemon1.Saludo();
	
	Pokemon pokemon2("Charmander", 0.90);
	pokemon2.Saludo();
	
	return 0;
}