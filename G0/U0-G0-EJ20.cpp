/*Guia 0 Ejercicio 20
Realice un programa que pida ingresar n�meros enteros y los vaya sumando. El ingreso de
   n�meros finaliza cuando el usuario ingresa un n�mero negativo. Visualice la suma de los
   n�meros ingresados. */

#include <iostream>
using namespace std;

int main()
{
    int numero,suma;
    suma = 0;           // limpio suma por si no ingresan ningun valor
    numero = 0;         // Inicializo el valor testigo

    while (numero>=0)   // Se sigue en el while mientras el numero es mayor o igual a cero
    {
        cout << "Ingresar un numero. Para finalizar ingrese un numero negtivo: ";
        cin >> numero;
        if (numero>=0)
        {
            suma=suma+numero;
        }
    }
    cout << "la sumatoria de todos los numeros ingresados es: " << suma;
    return 0;
}
