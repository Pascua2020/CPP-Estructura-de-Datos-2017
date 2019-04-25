/* Guia 1 Ejercicio 1
Escriba un programa que lea un entero y que determine e imprima si es impar o par.
[Sugerencia: use el operador módulo. Un número par es un múltiplo de dos.
Cualquier múltiplo de dos deja un residuo de cero cuando se divide entre dos.] */

#include <iostream>
using namespace std;

int main()
{
int entero;
cout << "ingrese un numero" << endl;
cin >> entero;
if(entero % 2 == 0 )
cout << "el numero es par" << endl;
else
cout << "el numero es impar" << endl;
return 0;
}
