#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	//variables
	float peso = 0;
	float altura = 0;
	float resultado = 0;
	
	// datos
	cout<<"Calculadora IMC \n";
	cout<<"Ingrese su peso (kg): ";
	cin>>peso;
	cout<<"Ingrese su altura (m): ";
	cin>>altura;
	
	//logica
	resultado = peso / pow(altura,2);
	
	//resultado
	cout<<"Su IMC es: "<<setprecision(3)<<resultado;
	
	return 0;
}
