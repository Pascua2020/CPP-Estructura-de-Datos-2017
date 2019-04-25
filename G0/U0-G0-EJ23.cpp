/*Guia 0 Ejercicio 23
Realice un programa que exhiba un menú con tres opciones.
Pida al usuario elegir una opción. En el caso de ser válida la opción,
indicar en pantalla “Ud. optó por: “. Caso contrario indicar “Opción no válida”..
*/

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    opcion = 0;
    cout << "Menu"<<endl;
    cout << "Opcion 1 Altas"<<endl;
    cout << "Opcion 2 Modificaciones"<<endl;
    cout << "Opcion 3 Bajas"<<endl;
    cout << "Ingrese su Opcion: ";
    cin >> opcion;

    if (opcion == 1)
    {
        cout << "Ud. opto por Altas"<< endl;
    }
    else if (opcion == 2)
    {
        cout << "Ud. opto por Modificaciones"<< endl;
    }
    else if (opcion == 3)
    {
        cout << "Ud. opto por Bajas"<< endl;
    }
    else
    {
        cout << "Opcion no valida";
    }
    return 0;
}
