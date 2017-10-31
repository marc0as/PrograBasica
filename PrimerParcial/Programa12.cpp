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
    int Time=1;

    for (int j=0; j<12; j++)
    {
        for (int i=j; i<=79-j; i++)
        {
            gotoxy (i,j);            
            cout <<"*";
            Sleep (Time);           
        }
    
        for (int i=j; i<=24-j; i++)
        {
            gotoxy (79-j,i);
            cout <<"*";
            Sleep (Time);
        }
    
        for (int i=78-j; i>=j; i--)
        {
            gotoxy (i,24-j);
            cout <<"*";
            Sleep (Time);
        }
    
        for (int i=23-j; i>=j+1; i--)
        {
            gotoxy (j,i);
            cout <<"*";
            Sleep (Time);
        }
    }
       
    for (int i=12; i<=67; i++)
    {
        gotoxy (i,12);            
        cout <<"*";
        Sleep (Time);           
    }
    
    Sleep (1000);
    gotoxy (28,12);
    system ("pause");
    
    for (int i=12; i<=67; i++)
    {
        gotoxy (i,12);            
        cout <<"*";          
    }
    
    Sleep (1000);
    
    for (int i=67; i>=12; i--)
    {
        gotoxy (i,12);            
        cout <<" ";
        Sleep (Time);           
    }
    
    for (int j=12; j>=0; j--)
    {
        for (int i=23-j; i>=j+1; i++)
        {
            gotoxy (j,i);
            cout <<" ";
            Sleep (Time);
        }
        
        for (int i=78-j; i>=j; i++)
        {
            gotoxy (i,24-j);
            cout <<" ";
            Sleep (Time);
        }
        
        for (int i=j; i<=79-j; i--)
        {
            gotoxy (i,j);            
            cout <<" ";
            Sleep (Time);           
        }
    
        for (int i=j; i<=24-j; i--)
        {
            gotoxy (79-j,i);
            cout <<" ";
            Sleep (Time);
        }       
    }
    
    gotoxy (0,0);
    system ("pause");
    return 1;
}//Fin de la función principal
