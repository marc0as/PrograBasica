/*Programa 4
Descripción: Programa para calcular el area de:
             triangulo, rectangulo y circulo
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

int main (void)
{
    int Opc;
    double ResultArea, Base, Altura, Radio; 
    
    cout <<"Programa que calcula areas" <<endl <<endl
         <<"Elige una opcion" <<endl
         <<"1.- Rectangulo o cuadrado" <<endl
         <<"2.- Triangulo" <<endl
         <<"3.- Circulo" <<endl <<endl;         
    
    cin >> Opc;
    cout <<endl;
    
    switch (Opc)
    {
           case 1: 
                cout <<"Ingresa el valor de la base" <<endl;
                cin >> Base;
                
                cout <<"Ingresa el valor de la altura" <<endl;
                cin >> Altura;
                
                ResultArea = Base*Altura;
                
                if (Base==Altura)
                {
                   cout <<"El area del cuadrado es: " << ResultArea <<endl;
                }//Cierra if
                
                else
                {
                   cout <<"El area del rectangulo es: " << ResultArea <<endl;
                }
                     
           break;
           
           case 2:
                cout <<"Ingresa el valor de la base" <<endl;
                cin >> Base;
                
                cout <<"Ingresa el valor de la altura" <<endl;
                cin >> Altura;
                
                ResultArea = (Base*Altura)/2;
                cout <<"El area del triangulo es: " << ResultArea <<endl;
                
           break;
           
           case 3:
                cout <<"Ingresa el valor del radio" <<endl;
                cin >> Radio;
                
                if (Radio>0)
                {
                   ResultArea = M_PI * pow(Radio, 2);
                   cout <<"El area del circulo es: " << ResultArea <<endl;
                }               
                else
                {
                   cout <<"El circulo no existe" <<endl;
                }
                
           break;
           
           default: cout <<"Por favor seleccione una opcion correcta" <<endl;
    }
    
    system("pause");
    return 1;
}//Fin de la función principal
