/* Guia 1 Ejercicio 5

Escriba un programa en seudoc�digo y despu�s una aplicaci�n en C++ que utilice una
instrucci�n while para determinar e imprimir el mayor n�mero de una serie de 10 n�meros
introducidos por el usuario. Su programa debe utilizar tres variables, como se muestra a continuaci�n:

Contador: Un contador para contar hasta 10 (es decir, para llevar el registro de cu�ntos
n�meros se han introducido, y para determinar cu�ndo se hayan procesado los 10 n�meros).

Numero: El n�mero actual que se introduce al programa.

Mayor: El n�mero m�s grande encontrado hasta ahora.
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
