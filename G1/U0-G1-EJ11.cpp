/* Guia 1 Ejercicio 11
Escriba un programa que lea cinco n�meros (cada uno entre 1 y 30).
Suponga que el usuario s�lo introduce valores v�lidos.
Por cada n�mero le�do, su programa debe imprimir una l�nea que contenga ese n�mero de
asteriscos adyacentes. Por ejemplo, si su programa lee el n�mero 7, debe mostrar *******.
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
