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
            for(int i=0; i<3; i++)
                cout<<"A[" <<i <<"] + B[" <<i <<"] = " <<Res[i] <<endl;
        break;
        case(2):
            for(int i=0; i<3; i++)
                cout<<"A[" <<i <<"] - B[" <<i <<"] = " <<Res[i] <<endl;
        break;
        case(3):
            for(int i=0; i<3; i++)
                cout<<"A[" <<i <<"] * B[" <<i <<"] = " <<Res[i] <<endl;
        break;
        case(4):
            for(int i=0; i<3; i++)
                cout<<"A[" <<i <<"] / B[" <<i <<"] = " <<Res[i] <<endl;
        break;
    }//Fin switch de impresion
    cout<<endl;
}//Fin Imprimir

void Leer(const int &RefOpc, double &RefRes)
{
    int A[3], B[3];
    
    system("cls");
    cout<<"Ingresa los valores del vector A" <<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Ingresa tu elemento " <<i+1 <<": ";
        cin>>Var[i];
        cout<<endl;
    }


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
