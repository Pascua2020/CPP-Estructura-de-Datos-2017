/*Gu�a 0 Ejercicio 8
Dados dos n�meros enteros cuya relaci�n de valores es que el primero es menor o igual al segundo,
 escribir la secuencia de n�meros que existe entre ambos n�meros:

a) Incluyendo a ambos n�meros ingresados: Ejemplo: Si se ingresan 2 y 6
b) Incluyendo los numeros entre ambos.
*/

#include <iostream>

using namespace std;
int main ()
{
int numero1 = 2;
int numero2 = 5;

for (numero1=2;numero1<=numero2+1;numero1++)
   {
   cout << numero1<< endl;
   }

cout << "........"<< endl;

for (numero1=2+1;numero1<=numero2;numero1++)
   {
   cout << numero1<< endl;
   }

return 0;
}
