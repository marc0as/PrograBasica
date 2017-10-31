/*Programa 
Descripcion: Programa uso de funciones paso por referencia
             para
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
#include <windows.h>//Para poder crear la funci�n gotoxy
using namespace std;

void Leer(int &RefD1, int &RefD2);
void Sumar(const int &RefD1, const int &RefD2, int &RefRes);
void Imprimir(const int &RefD1, const int &RefD2, const int &RefRes);

int main (void)
{
    system("pause");
    return 1;
}//Fin de la funcion principal

void Leer(int &RefD1, int &RefD2)
{
    cout<<"Ingresa un valor" <<endl;
    cin>>RefD1;
    system("cls");
    cout<<"Ingresa tu segundo valor" <<endl;
    cin>>RefD2;
    system("cls");
}//Fin Leer

void Sumar(const int &RefD1, const int &RefD2, int &RefRes)
{

}//Fin Sumar

void Imprimir(const int &RefD1, const int &RefD2, const int &RefRes)
{

}//Fin Imprimir
