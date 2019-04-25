/*Guía 0 Ejercicio 9
Ingresar los valores de los resultados de un estudio bacteriológico. Si los valores son iguales o mayores a 66.3 entonces indicar que la prueba fue positiva. En caso contraria, indicar que la prueba fallo*/

#include <iostream>

using namespace std;
int main ()
{
float numero1 = 0;

cout << "Ingrese valor" << endl;
cin >> numero1;

if(numero1>=66.3)
{
cout << "Fue un exito" << endl;
}
else if(numero1<=66.3)
{
cout << "Fue un fracaso" << endl;
}
return 0;
}
