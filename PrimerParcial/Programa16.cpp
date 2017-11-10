/*Programa 16
Descripcion: Programa para 4 casos
             utilizando for y funciones paso por referencia
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

void Menu(int &RefOpc);
void Imprimir(const int &RefOpc);
void Leer(const int &RefOpc, double &RefRes);
void CalcSumaS(const int &RefNum, double &RefRes);
void CalcFact(const int &RefNum, double &RefRes);
void CalcSeri(const int &RefN, const int &RefX, double &RefRes);

int main(void)
{
    int Opc;
    do{//Inicio do-while para repetir
        Menu(Opc);
        if (Opc!=4)
        {
            Imprimir(Opc);
            system("pause");
        }//Fin if de eleccion        
    }while (Opc!=4);//Fin do-while repetir
    return 1;
}//Fin de la funcion principal

void Menu(int &RefOpc)
{
    do{//Inicio do-while del error
        system ("cls"); 
        
        cout <<"Operaciones Matematicas" <<endl <<endl
        
            <<"1.- Suma sucesiva" <<endl
            <<"2.- Factorial" <<endl
            <<"3.- Series" <<endl
            <<"4.- Salir" <<endl <<endl
            
            <<"Selecciona una opcion:  " <<endl;
            
        cin >>RefOpc;
        cout <<endl <<endl;
        
        if (RefOpc<1 || RefOpc>4)
        {
            system ("cls");
            cout <<"ERROR!" <<endl
                <<"Elige una opcion correcta" <<endl;            
            system ("pause");        
        }//Fin if del error
    }while (RefOpc<1 || RefOpc>4);//Fin do-while del error
}//Fin Menu

void Imprimir(const int &RefOpc)
{
    double Res=0;
    Leer(RefOpc, Res);
    switch(RefOpc)
    {
        case(1):
            cout<<"E = ";
        break;
        case(2):
            cout<<"n! = ";
        break;
        case(3):
            cout<<"El resultado de la serie es = ";
        break;
    }//Fin switch de impresion
    cout<<Res <<endl <<endl;
}//Fin Imprimir**

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

void CalcSumaS(const int &RefNum, double &RefRes)
{
    for (int i=RefNum; i>0; i--)
    RefRes = RefRes + i;
}//Fin CalcSumaS

void CalcFact(const int &RefNum, double &RefRes)
{
    RefRes=1;
    for (int i=RefNum; i>1; i--)
        RefRes = RefRes*i;
}//Fin CalcFact

void CalcSeri(const int &RefN, const int &RefX, double &RefRes)
{
    double Res=0, Deno;
    int Change=0;

    Res = RefX+RefN;
    Res = pow(Res, 2);
    CalcFact(1,Deno);
    RefRes = Res/Deno;
    //Calculo de la primera fraccion

    for (int i=1; i<RefN; i++)
    {
        if (Change==0)
        {
            Res = RefX-RefN;
            Res = pow(Res, i+2);
            CalcFact(i+1,Deno);
            Res = Res/Deno;
            RefRes = RefRes+Res;
            Change = 1;
        }
        else
        {
            Res = RefX+RefN;
            Res = pow(Res, i+2);
            CalcFact(i+1,Deno);
            Res = Res/Deno;
            RefRes = RefRes-Res;
            Change = 0;
        }
    }//Fin for del calculo
}//Fin CalcSerie
