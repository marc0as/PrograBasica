/*Programa 
Descripcion: Programa 
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

void gotoxy(int x, int y)
{
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y = y;
     SetConsoleCursorPosition(hcon,dwPos); 
}

int main (void)
{
    system("pause");
    return 1;
}//Fin de la funcion principal
