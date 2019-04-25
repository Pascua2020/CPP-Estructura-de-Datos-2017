/*Guía 0 Ejercicio 5
Modificar el programa anterior para que muestre los números del 100 al 0, pero de 5 en 5.*/

#include <iostream>

using namespace std;
int contador;

int main ()
{
    for (contador=100; contador>=0; contador-=5)
    {
        cout << contador<< endl;
    }
    return 0;
}
