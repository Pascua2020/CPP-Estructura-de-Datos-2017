/* Guia 1 Ejercicio 3
Una gran empresa de químicos paga a sus vendedores mediante comisiones.
Los vendedores reciben $200 por semana, más el 9% de sus ventas brutas durante esa semana.
Por ejemplo, un vendedor que vende $5000 de mercancía en una semana, recibe $200 más el 9%
de $5000, o un total de $650. Desarrolle un programa en C++ que utilice una instrucción while
para recibir como entrada las ventas brutas de cada vendedor de la semana anterior, y que
calcule y muestre los ingresos de ese vendedor. Procese las cifras de un vendedor a la vez.
*/
#include <iostream>
using namespace std;

int main()
{
float ventas=0;
float vb=0;

while(ventas != -1){
cout << "Escriba las ventas (-1 para salir):" << endl;
cin >> ventas;
if(ventas !=-1){
vb = ((ventas / 100) * 9) + 200;
cout << "El salario es: $" << vb << endl;}
}
return 0;
}
