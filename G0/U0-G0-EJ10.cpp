/*Guía 0 Ejercicio 10
Realizar un programa que calcule el mayor de tres números enteros ingresados. */

#include <iostream>

using namespace std;
int main ()
{
int numero1 = 0;
int numero2 = 0;
int numero3 = 0;

cout << "ingrese 3 numeros" << endl;
cin >> numero1;
cin >> numero2;
cin >> numero3;

if(numero1>numero2 && numero1>numero3)
cout << "el mayor es" << numero1 << endl;

if(numero3>numero1 && numero3>numero2)
cout << "el mayor es" << numero3 << endl;

if(numero2>numero1 && numero2>numero3)
cout << "el mayor es" << numero2 << endl;

return 0;
}
