/* Guia 1 Ejercicio 5

Escriba un programa en seudocódigo y después una aplicación en C++ que utilice una
instrucción while para determinar e imprimir el mayor número de una serie de 10 números
introducidos por el usuario. Su programa debe utilizar tres variables, como se muestra a continuación:

Contador: Un contador para contar hasta 10 (es decir, para llevar el registro de cuántos
números se han introducido, y para determinar cuándo se hayan procesado los 10 números).

Numero: El número actual que se introduce al programa.

Mayor: El número más grande encontrado hasta ahora.
*/

#include <iostream>
using namespace std;

int main()
{
float contador=0;
float numero=0;
float mayor=0;
for(contador=0;contador<10;contador++){
cout << "Introduzca un numero:" << endl;
cin >> numero;
if(numero>mayor)
    mayor = numero;}
cout << "El numero mayor es:" << mayor << endl;
return 0;
}
