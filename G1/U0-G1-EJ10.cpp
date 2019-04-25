/* Guia 1 Ejercicio 10
Escriba un programa que utilice ciclos for para generar los siguientes patrones por separado,
uno debajo del otro. Use ciclos for para generar los patrones.

(a)   (b)    (c)      (d)
* ********** ********** *
** ********* ********* **
*** ******** ******** ***
**** ******* ******* ****
***** ****** ****** *****
****** ***** ***** ******
******* **** **** *******
******** *** *** ********
********* ** ** *********
********** * * **********

Todos los asteriscos (*) deben imprimirse mediante una sola instrucción de la forma cout << “*”;
(esto hace que los asteriscos se impriman uno al lado del otro).

[Sugerencia: los últimos dos patrones requieren que cada línea empiece con un número apropiado
de espacios en blanco.
Crédito adicional: combine su código de los cuatro problemas separados
en un solo programa que imprima los cuatro patrones, uno al lado del otro, haciendo un uso
inteligente de los ciclos for anidados.]
*/
#include <iostream>
using namespace std;

int main()
{
string ast = "*";
string ast2 = "**********";
string ast4 = "*";
string ast3 = "**********";
string esp;
string esp2="         ";
int cont=0;

// A
for(cont=0;cont<10;cont++){
cout << ast << endl;
ast += "*";
}

cout << endl;

// B
for(cont=10;cont>0;cont--){
cout << esp << ast2 << endl;
ast2.erase(cont-1);
esp+=" ";
}

cout << endl;

// C
cont = 10;
for(cont=10;cont>0;cont--){
cout << ast3 << endl;
ast3.erase(cont-1);
}

// D
cout << endl;

cont = 0;

for(cont=9;cont>0;cont--){
cout << cont << endl;
cout << esp2 << ast4 << endl;
esp2.erase(cont-1);
ast4 += "*";
}

return 0;
}
