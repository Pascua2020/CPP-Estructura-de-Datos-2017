/* Guia 0 Ejercicio 2
Ingresar valores enteros para las variables numeroA y numeroB. Luego, intercambiar sus
valores (que lo cargado en numeroA quede en numeroB, y viceversa). Mostrar el contenido
de numeroA y numeroB en pantalla. */

#include <iostream>
using namespace std;

int main ()
{
    float numero1,numero2; // float es el tipo de dato REAL. Se ingresa con el punto decimal
    // no se usa la coma. Ejemplo: 3.1416

    numero1 = 0; //Inicializo a la variable ´numero1´ con 0
    numero2 = 0; //Inicializo a la variable ´numero2´ con 0
    cout << "Ingrese un numero:";
    cin >> numero1;
    cout << "Ingrese un numero:";
    cin >> numero2;

    int numero3=numero1;
    numero1=numero2;
    numero2=numero3;

    cout << numero1 << endl;
    cout << numero2;
    return 0;
}
