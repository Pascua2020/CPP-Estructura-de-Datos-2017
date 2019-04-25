/* Guia 0 Ejercicio 24:
Modificar al programa anterior para que, en el caso que se haya ingresado una
opción inválida, el programa pida un nuevo ingreso, hasta que el mismo sea válido.

Ejercicio anterior:
Realice un programa que exhiba un menú con tres opciones.
Pida al usuario elegir una opción. En el caso de ser válida la opción,
indicar en pantalla “Ud. optó por: “. Caso contrario indicar “Opción no válida”..
*/

// Validación de entrada utilizando una bandera

#include <iostream>
using namespace std;

int main()
{
    int opcion;
    opcion = 0;
    bool bandera;
    bandera = true;
    cout << "Menu"<<endl;
    cout << "Opcion 1 Altas"<<endl;
    cout << "Opcion 2 Modificaciones"<<endl;
    cout << "Opcion 3 Bajas"<<endl;
    cout << "Ingrese su Opcion: ";

    while (bandera)
    {

        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Ud. opto por Altas"<< endl;
            bandera = false;
        }
        else if (opcion == 2)
        {
            cout << "Ud. opto por Modificaciones"<< endl;
            bandera = false;
        }
        else if (opcion == 3)
        {
            cout << "Ud. opto por Bajas"<< endl;
            bandera = false;
        }
        else
        {
            cout << "Opcion no valida."<< endl;
            cout << "Intente nuevamente: ";
            // Acá no dejamos la bandera como true así no sale del while
        }
    }

// Como vemos la variable opcion me guarda lo elegido por el usuario.
    cout << "Ya salimos del While"<< endl;
    cout << "Valor de la variable \"opcion\" es: " << opcion;

    return 0;
}
