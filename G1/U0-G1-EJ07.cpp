/* Guia 1 Ejercicio 7
Escriba un programa que pida al usuario que introduzca el tamaño del lado
de un cuadrado y que muestre un cuadrado hueco de ese tamaño, compuesto de
asteriscos y espacios en blanco. Su programa debe funcionar con cuadrados
que tengan lados de todas las longitudes entre 1 y 20.
Por ejemplo, si su programa lee un tamaño de 5, debe imprimir:

*****
*   *
*   *
*   *
*****

*/
#include <iostream>
using namespace std;

int main()
{
int cont=0;
int cont2=0;
float num=0;

cout << "Ingrese un numero" << endl;

cin >> num;

// Si el numero ingresado es diferente a 0 o 1.
if( num>1 ){

// FOR A
for(cont=0;cont<num;cont++)
{
cout << "*";
}

// FOR B
for(cont=0;cont<num-2;cont++ )
{
cout << endl << "*";

    // FOR C
    for(cont2=0;cont2<num-2;cont2++)
    {
    cout << " ";
    }

cout << "*";
}

cout << endl;

// FOR D
for(cont=0;cont<num;cont++)
{
cout << "*";
}

}

// Si el numero ingresado es 0 o 1.
else if(num==1){
    cout << "*";
}

else if(num==0){}

return 0;
}
