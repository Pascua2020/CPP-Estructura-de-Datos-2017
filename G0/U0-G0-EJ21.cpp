/* Guia 0 Ejercicio 21
Leer una lista de números mientras el promedio entre todos sea menor a 20. Informar la cantidad de valores leídos.*/

#include <iostream>
using namespace std;

int main()
{
int promedio=0;
int numero=0;
int total=0;
int cont=0;
cout << "Ingrese numeros" << endl;
while(promedio<20){
    cin >> numero;
    cont+=1;
    total += numero;
    promedio = total/cont;}
cout << "el promedio es:" << promedio << endl;
cout << "se leyeron numero(s):" << cont << endl;
return 0;
}
