/*Guia 0 Ejercicio 19
Realice un programa que pida ingresar un número entero
   tantas veces como necesite, hasta que su valor esté comprendido
   entre: 1 y 10 inclusive.
   Este programa verifica la entrada de datos del usuario.
   */

#include <iostream>
using namespace std;

int main()
{
    int numero;
    bool bandera;
    bandera = true;

    while ( bandera )  // al empezar el valor verdadero de bandera hace que entre se en el while
    {
        cout << "Ingresar un numero entre 1 y 10: ";
        cin >> numero;
        if (numero >= 1 && numero <= 10 )
        {
            bandera = false; // para que salga del while
        }
    }
    cout << "Bien! por fin entendio"<< endl;
    cout << "Ud. ingreso el numero: " << numero;
    return 0;
}
