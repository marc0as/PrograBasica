/*Programa 5
Descripción: Programa para convertir sistema
             decimal a romano
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
using namespace std;

int main (void)
{
    int Opc;
    
    cout <<"Programa que convierte de Decimal a Romano" <<endl <<endl
         <<"Elige una opcion" <<endl
         <<"1" <<endl
         <<"2" <<endl
         <<"3" <<endl
         <<"4" <<endl
         <<"5" <<endl
         <<"6" <<endl
         <<"7" <<endl
         <<"8" <<endl
         <<"9" <<endl
         <<"10" <<endl
         <<"11" <<endl
         <<"12" <<endl
         <<"13" <<endl
         <<"14" <<endl
         <<"15" <<endl
         <<"16" <<endl
         <<"17" <<endl
         <<"18" <<endl
         <<"19" <<endl
         <<"20" <<endl <<endl;
         
    cin >> Opc;
    cout <<endl;    
        
    switch (Opc)
    {
       case 1:
            cout <<"El " <<Opc <<" en Romano es I" <<endl <<endl;       
       break;
       
       case 2:
            cout <<"El " <<Opc <<" en Romano es II" <<endl <<endl;       
       break;
       
       case 3:
            cout <<"El " <<Opc <<" en Romano es III" <<endl <<endl;       
       break;
       
       case 4:
            cout <<"El " <<Opc <<" en Romano es IV" <<endl <<endl;       
       break;
       
       case 5:
            cout <<"El " <<Opc <<" en Romano es V" <<endl <<endl;       
       break;
       
       case 6:
            cout <<"El " <<Opc <<" en Romano es VI" <<endl <<endl;       
       break;
       
       case 7:
            cout <<"El " <<Opc <<" en Romano es VII" <<endl <<endl;       
       break;
       
       case 8:
            cout <<"El " <<Opc <<" en Romano es VIII" <<endl <<endl;       
       break;
       
       case 9:
            cout <<"El " <<Opc <<" en Romano es IX" <<endl <<endl;       
       break;
       
       case 10:
            cout <<"El " <<Opc <<" en Romano es X" <<endl <<endl;       
       break;
       
       case 11:
            cout <<"El " <<Opc <<" en Romano es XI" <<endl <<endl;       
       break;
       
       case 12:
            cout <<"El " <<Opc <<" en Romano es XII" <<endl <<endl;       
       break;
       
       case 13:
            cout <<"El " <<Opc <<" en Romano es XIII" <<endl <<endl;       
       break;
       
       case 14:
            cout <<"El " <<Opc <<" en Romano es XIV" <<endl <<endl;       
       break;
       
       case 15:
            cout <<"El " <<Opc <<" en Romano es XV" <<endl <<endl;       
       break;
       
       case 16:
            cout <<"El " <<Opc <<" en Romano es XVI" <<endl <<endl;       
       break;
       
       case 17:
            cout <<"El " <<Opc <<" en Romano es XVII" <<endl <<endl;       
       break;
       
       case 18:
            cout <<"El " <<Opc <<" en Romano es XVIII" <<endl <<endl;       
       break;
       
       case 19:
            cout <<"El " <<Opc <<" en Romano es XIX" <<endl <<endl;       
       break;
       
       case 20:
            cout <<"El " <<Opc <<" en Romano es XX" <<endl <<endl;       
       break;
                
       default: cout <<"Elige una opcion correcta" <<endl <<endl;
    }
    
    system("pause");
    return 1;
}//Fin de la función principal
