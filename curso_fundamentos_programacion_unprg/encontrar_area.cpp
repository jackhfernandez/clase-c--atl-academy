/******************************************************************************
  programa para encontrar area
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float e,f,z,s,a;
  
  cout<< ("  Programa para calcular el area terreno triangular\n") <<endl;  
  cout<< ("  Ingresa lado lindero: ");
  cin >> ( e );
  cout<< ("  Ingresa lado lindero: ");
  cin >> ( f );
  cout<< ("  Ingresa lado lindero: ");
  cin >> ( z );
  
  s = (e+f+z)/2;
  a = sqrt( s * (s -e ) * (s - f) * (s- z));
  
  cout << ("\n  El perimetro es: ");
  cout << " " <<s;
  cout << ("\n  El   area    es: ");
  cout << a << endl;
  
  return 0;
}