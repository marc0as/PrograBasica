/*Programa22
    Descripcion: Programa para: sumar, restar, dividir y multiplicar
                vectores
    Salas Mateos Marco Antonio
    PP18042270
    1CV18
    Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

void Menu(int &RefOpc);

int main (void)
{
    int Opc;
    do{//Inicio do-while para repetir
        Menu(Opc);
        if (Opc!=5)
        {            
            Imprimir(Opc);
            system("pause");
        }//Fin if de eleccion        
    }while (Opc!=5);//Fin do-while repetir
    return 1;
}//Fin de la funcion principal

void Menu(int &RefOpc)
{
    do{//Inicio do-while del error
        system ("cls"); 
        
        cout<<"Operaciones con Vectores" <<endl <<endl
        
            <<"1.- Suma" <<endl
            <<"2.- Resta" <<endl
            <<"3.- Multiplicacion" <<endl
            <<"4.- Division" <<endl
            <<"5.- Salir" <<endl <<endl
            
            <<"Selecciona una opcion:  " <<endl;
            
        cin >>RefOpc;
        cout <<endl <<endl;
        
        if (RefOpc<1 || RefOpc>5)
        {
            system ("cls");
            cout <<"ERROR!" <<endl
                <<"Elige una opcion correcta" <<endl;            
            system ("pause");        
        }//Fin if del error
    }while (RefOpc<1 || RefOpc>5);//Fin do-while del error
}//Fin Menu

void Imprimir(const int &RefOpc)
{
    double Res[3];
    Leer(RefOpc, Res);
    switch(RefOpc)
    {
        case(1):
            cout<<"A+B = ";
        break;
        case(2):
            cout<<"A-B = ";
        break;
        case(3):
            cout<<"A*B = ";
        break;
        case(4):
            cout<<"A/B = ";
        break;
    }//Fin switch de impresion
    cout<<Res <<endl <<endl;
}//Fin Imprimir

void Leer(const int &RefOpc, double &RefRes)
{
    int Num, X;
    do{
        system("cls");    
        cout <<"Ingresa un valor: ";
        cin >>Num;
        cout <<endl <<endl;
        if (Num<1)
        {
            system ("cls");
            cout<<"ERROR!" <<endl
                <<"Elige una opcion correcta" <<endl;            
            system ("pause");        
        }//Fin if del error
    }while (Num<1);//Fin do-while del error de eleccion

    switch(RefOpc)
    {
        case(1):
            CalcSumaS(Num,RefRes);
        break;

        case(2):
            CalcFact(Num,RefRes);
        break;

        case(3):
            cout <<"Ingresa la constante: ";
            cin >>X;
            cout <<endl <<endl;

            CalcSeri(Num,X,RefRes);
        break;
    }//Fin switch tipo de calculo
}//Fin Leer
