/*Guía 0 Ejercicio 7
Modificar el programa anterior de manera tal que al inicio se pregunte la cantidad de edades a ingresar.
Luego mostrar el promedio de edad de las personas.*/

#include <iostream>

using namespace std;
int cantidad,contador,edad,sumaEdades;

int main ()
{
    sumaEdades = 0;
    cout << "Ingrese la cantidad de personas: ";
    cin >> cantidad;
   for (contador=1;contador<=cantidad;contador++)
   {
   cout << "Ingrese la edad de la persona "<<contador<<": ";
   cin >> edad;
   sumaEdades = sumaEdades + edad;
   }
   cout << "El promedio de edad es: "<<sumaEdades/cantidad;
   return 0;
}
