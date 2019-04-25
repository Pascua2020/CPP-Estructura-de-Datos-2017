/* Guia 0 Ejercicio 22
Realice un programa que pida ingresar un número entero entre 0 y 9.
Validar que el número ingresado corresponda al rango permitido.
En caso de éxito informar “dato ingresado válido” caso contrario, pedir el número nuevamente.*/

#include <iostream>
using namespace std;

int main()
{
int numero=0;
cout << "Ingrese un numero entre 1 y 9" << endl;
cin >> numero;
while (numero < 1 || numero > 9 ){
    cout << "ingrese un numero correcto" << endl;
    cin >> numero;
    }
cout << "numero ingresado correctamente" << endl;
return 0;
}
