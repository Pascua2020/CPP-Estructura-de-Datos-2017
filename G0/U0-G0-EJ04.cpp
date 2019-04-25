/*Guía 0 Ejercicio 4
Realizar un programa que muestre los números del 100 al 0.*/

#include <iostream>

using namespace std;
int contador;

int main ()
{
    for (contador=100; contador>=0; contador--)
    {
        cout << contador<< endl;
    }
    return 0;
}
