/* Calcula cuántos números pares hay entre dos números ingresados*/

#include <iostream>
using namespace std;
 
int main()
{
	cout << "Programa que calcula la cantidad de numeros pares " << endl;
    cout << "entre dos numeros ingresados por el usuario" << endl;
    
    int a = 0, b = 0, c = 0;
    cout << "\nIngrese  un  numero: ";
    cin >> a;
    cout << "Ingrese otro numero: ";
    cin >> b;
 
    while (a <= b)
    {
        if (a % 2 == 0)
            c = c + 1;
        a = a + 1;
    }
 
	cout << endl << "  Hay " << c << " numero(s) par(es) ";
    cout << " entre estos numeros." << endl;
    cin.ignore();
    
    return 0;
}