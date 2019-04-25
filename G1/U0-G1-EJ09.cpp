/* Guia 1 Ejercicio 9
Escriba un programa que utilice una instrucción for para sumar una secuencia de enteros.
Suponga que el primer entero leído especifica el número de valores que quedan por introducir.
Su programa debe leer sólo un valor por cada instrucción de entrada.
*/
#include <iostream>
using namespace std;

int main()
{
int total=0;
float num=0;
float num1=0;
int cont=0;
cout << "Ingrese un numero para ingresar numeros" << endl;
cin >> num;
for(cont=0;cont<num;cont++){
cout << "Ingrese un numero" << endl;
cin >> num1;
total += num1;
}
cout << "El total es:" << total << endl;
return 0;
}
