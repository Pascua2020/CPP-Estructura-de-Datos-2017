/*Guia 1 Ejercicio 4
Desarrolle un programa en C++ que utilice una instrucción while para determinar
el sueldo bruto para cada uno de varios empleados. La empresa paga la cuota normal
en las primeras 40 horas de trabajo de cada empleado, y paga cuota y media en todas
las horas trabajadas que excedan de 40. Usted recibe una lista de los empleados de
la empresa, el número de horas que trabajó cada empleado la semana pasada y la tarifa
por horas de cada empleado. Su programa debe recibir como entrada esta información
para cada empleado, debe determinar y mostrar el sueldo bruto de cada empleado.
*/

#include <iostream>
using namespace std;

int main()
{
float horas=0;
float tarifa=0;
float salario=0;
while(horas !=-1){
cout << "Introduzca las horas trabajadas (-1 para salir):" << endl;
cin >> horas;
cout << "Introduzca la tarifa por horas del empleado:" << endl;
cin >> tarifa;
salario = horas*tarifa;

    if(horas>40){
    horas -= 40;
    salario += horas * (tarifa * 0.5);}
    if(horas !=-1){
    cout << "El salario es: $" << salario << endl;
    }
}
return 0;
}
