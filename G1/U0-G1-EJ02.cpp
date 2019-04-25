/* Guia 1 Ejercicio 2
Los conductores se preocupan acerca del kilometraje de sus autom�viles.
Un conductor ha llevado el registro de varios reabastecimientos de gasolina,
registrando los kil�metros conducidos y los litros usados en cada reabastecimiento.

Desarrolle un programa en C++ que utilice una instrucci�n while para recibir como
entrada los kil�metros conducidos y los litros usados (ambos como enteros) por
cada reabastecimiento. El programa debe calcular y mostrar los kil�metros por
litro obtenidos en cada reabastecimiento, y debe imprimir el total de kil�metros
por litro obtenidos en todos los reabastecimientos hasta este punto. */

#include <iostream>
using namespace std;

int main()
{
int km=0;
int litros=0;
float kpl=0;

while(km != -1)
{
cout << "Escriba los kil�metros usados (-1 para salir):" << endl;
cin >> km;
cout << "Escriba los litros:" << endl;
cin >> litros;
kpl=kpl+(km/litros);
cout << "KPL en este reabastecimiento:" << kpl << endl;
}
return 0;
}
