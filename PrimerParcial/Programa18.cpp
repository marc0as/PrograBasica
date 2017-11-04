/*Programa18
Descripcion: Programa para sumar
             2 numeros enteros con uso de funciones paso por referencia
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
using namespace std;

void Leer(int &RefD1, int &RefD2);
void Sumar(const int &RefD1, const int &RefD2, int &RefRes);
void Imprimir(const int &RefD1, const int &RefD2, const int &RefRes);

int main (void)
{
    int V1, V2, Suma;
    Leer(V1, V2);
    Sumar(V1, V2, Suma);
    Imprimir(V1, V2, Suma);
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
    RefRes = RefD1+RefD2;
}//Fin Sumar

void Imprimir(const int &RefD1, const int &RefD2, const int &RefRes)
{
    cout<<"El resultado de la suma es: " <<RefD1 <<" + " <<RefD2 <<" = " <<RefRes <<endl <<endl;
}//Fin Imprimir
