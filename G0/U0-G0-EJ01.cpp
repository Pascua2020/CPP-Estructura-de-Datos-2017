/* Guia 0 Ejercicio 1
Ingresar dos números reales y mostrar el resultado de la suma de ambos. */

#include <iostream>
using namespace std;

int main ()
{
    float numero1,numero2; // float es el tipo de dato REAL. Se ingresa con el punto decimal
    // no se usa la coma. Ejemplo: 3.1416
    float resultado;
    numero1 = 0; //Inicializo a la variable ´numero1´ con 0
    numero2 = 0; //Inicializo a la variable ´numero2´ con 0
    cout << "Ingrese un numero:";
    cin >> numero1;
    cout << "Ingrese un numero:";
    cin >> numero2;
    resultado = numero1+numero2;
    cout << resultado;
    return 0;
}





