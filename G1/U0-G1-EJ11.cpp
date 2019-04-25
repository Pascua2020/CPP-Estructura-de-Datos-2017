/* Guia 1 Ejercicio 11
Escriba un programa que lea cinco números (cada uno entre 1 y 30).
Suponga que el usuario sólo introduce valores válidos.
Por cada número leído, su programa debe imprimir una línea que contenga ese número de
asteriscos adyacentes. Por ejemplo, si su programa lee el número 7, debe mostrar *******.
*/
#include <iostream>
using namespace std;

int main()
{
int num=0;
int cont=0;
int cont2=0;
for(cont=0;cont<5;cont++)
{
cout << "ingrese un numero" << endl;
cin >> num;
while(num > 30 || num < 0){
    cout << "Vuelva a ingresar el numero" << endl;
    cin >> num;
    }
for(cont2=0;cont2<num;cont2++)
{
    cout << "*";
}
}
return 0;
}
