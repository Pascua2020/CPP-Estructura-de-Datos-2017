/* Guia 1 Ejercicio 12
Un almacén de pedidos por correo vende cinco productos distintos,
cuyos precios de venta son los siguientes:
producto 1, $2.98;
producto 2, $4.50;
producto 3, $9.98;
producto 4, $4.49
y producto 5, $6.87.
Escriba un programa que lea una serie de pares de números, como se muestra a continuación:

a) número del producto
b) cantidad vendida

Su programa debe utilizar una instrucción switch para determinar el precio de venta de cada producto.
Debe calcular y mostrar el valor total de venta de todos los productos vendidos.
Use un ciclo controlado por centinela para determinar cuándo debe el programa dejar de iterar para
mostrar los resultados finales.
*/
#include <iostream>
using namespace std;

int main()
{
int num=0;
float pr=0;
int vd=0;
float total=0;
cout << "Seleccione un producto" << endl;
cin >> num;
switch(num){
case 1:
    pr = 2.98;
case 2:
    pr = 4.50;
case 3:
    pr = 9.98;
case 4:
    pr = 4.49;
case 5:
    pr = 6.87;
    }

    cout << "Ahora ingrese cantidad vendida" << endl;
    cin >> vd;
    total = vd * pr;
    cout << "El valor es de:$" <<  total << endl;
return 0;
}
