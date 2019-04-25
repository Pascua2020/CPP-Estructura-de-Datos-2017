/*Guía 0 Ejercicio 6
Ingresar la edad de 10 personas. Mostrar el promedio de edad. */
#include <iostream>

using namespace std;
int contador,edad,sumaEdades;

int main ()
{
    sumaEdades = 0;
    for (contador=1; contador <= 10; contador++)
    {
        cout << "Ingrese la edad de la persona "<<contador<<": ";
        cin >> edad;
        sumaEdades = sumaEdades + edad;
    }
    cout << "El promedio de edad es: "<<sumaEdades/10;
    return 0;
}
