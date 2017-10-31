/*Programa 7
Descripción: Programa para hacer una portada usando
             gotoxy y ciclos
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
#include <windows.h>//Para poder crear la función gotoxy
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
    for (int i=0; i<80; i++)
    {
        gotoxy (i,0);
        cout <<"*";
        Sleep (10);
    }
    
    for (int i=1; i<24; i++)
    {
        gotoxy (79,i);
        cout <<"*" <<endl;
        Sleep (10);
    }
    
    for (int i=79; i>=0; i--)
    {
        gotoxy (i,24);
        cout <<"*";
        Sleep (10);
    }    
    
    for (int i=23; i>0; i--)
    {
        gotoxy (0,i);
        cout <<"*" <<endl;
        Sleep (10);
    }        
    gotoxy (10,0);
    system("pause");
    return 1;
}//Fin de la función principal
