/*Guia 0 Ejercicio 23
Realice un programa que exhiba un men� con tres opciones.
Pida al usuario elegir una opci�n. En el caso de ser v�lida la opci�n,
indicar en pantalla �Ud. opt� por: �. Caso contrario indicar �Opci�n no v�lida�..
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
