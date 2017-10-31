/*Programa 
Descripción: Programa 
             para
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
    int Bloq=80, Fil=0, Col=0;
    
    for (int k=0; k<25; k++)
    {
        for (int j=0; j<4; j++)
        {
            for (int i=0; i<Bloq; i++)
            {
                gotoxy (i+(Col/2),Fil);            
                cout <<"*";
                Sleep (1);           
            }
            Bloq-=3;
            Fil++;
            Col+=3;
        }
        Bloq--;;
        Col++;        
    }
    Sleep(2000);
    return 1;
}//Fin de la función principal
