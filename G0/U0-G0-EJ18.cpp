/*Guia 0 Ejercicio 18
Realice un programa que reciba como entrada un cierto valor n (entero) y genere como salida el valor de la serie:
1+2+3+4+…+n */
#include <cstdlib>
#include <iostream>
using namespace std;

int numero,suma,contador;

int main()
{
    numero=0;
    cout << "Ingrese un valor n entero positivo: ";
    cin>> numero;
    for (contador=1; contador<=numero; contador++)
    {
        suma=suma+contador;
        cout<<contador<<endl;
    }
    cout << "la sumatoria de todos los numeros hasta "<<numero<<" es: " << suma;
return 0;
}
