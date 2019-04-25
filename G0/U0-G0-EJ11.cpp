/*Guía 0 Ejercicio 11
Ingresar 10 números enteros. Calcule la cantidad de números ingresados positivos, negativos e iguales a cero.*/

#include <iostream>

using namespace std;
int main ()
{
cout << "Ingrese 10 numeros" << endl;
int pos=0;
int neg=0;
int cero=0;
for(int contador=0;contador<10;contador++)
{
int numero;
cin >> numero;
if(numero>0)
pos+=1;
if(numero<0)
neg+=1;
if(numero==0)
cero+=1;
}
cout << "los numeros positivos son" << pos << endl;
cout << "los numeros negativos son" << neg << endl;
cout << "los numeros iguales a cero son" << cero << endl;
return 0;
}
