/*Programa 15
Descripcion: Programa para 4 casos
             utilizando for y funciones paso por copia
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

int Menu(void);
void Imprimir(int Opc);
double Leer(int Opc);
double CalcSumaS(int Num);
double CalcFact(int Num);
double CalcSeri(int N, int X);

int main(void)
{
    int Opc;
    do{//Inicio do-while para repetir

        Opc = Menu( );

        if (Opc!=4)
        {
            Imprimir(Opc);
            system("pause");
        }
        
    }while (Opc!=4);//Fin do-while repetir
    
    return 1;
}//Fin de la funcion principal

int Menu(void)
{
    int Opc;
    do{//Inicio do-while del error
        system ("cls"); 
        
        cout <<"Operaciones Matematicas" <<endl <<endl
        
            <<"1.- Suma sucesiva" <<endl
            <<"2.- Factorial" <<endl
            <<"3.- Series" <<endl
            <<"4.- Salir" <<endl <<endl
            
            <<"Selecciona una opcion:  " <<endl;
            
        cin >>Opc;
        cout <<endl <<endl;
        
        if (Opc<1 || Opc>4)
        {
            system ("cls");
            cout <<"ERROR!" <<endl
                <<"Elige una opcion correcta" <<endl;            
            system ("pause");        
        }//Fin if del error
    }while (Opc<1 || Opc>4);//Fin do-while del error
    return Opc;
}//Fin Menu

void Imprimir(int Opc)
{
    switch(Opc)
    {
        case(1):
            cout<<"E = " <<Leer(Opc) <<endl <<endl;
        break;

        case(2):
            cout<<"n! = " <<Leer(Opc) <<endl <<endl;
        break;

        case(3):
            cout<<"El resultado de la serie es = " <<Leer(Opc) <<endl <<endl;
        break;
    }
}//Fin Imprimir**

double Leer(int Opc)
{
    int Num, X;
    double Res;
    do{
        system("cls");
    
        cout <<"Ingresa un valor: ";
        cin >>Num;
        cout <<endl <<endl;
        if (Num<1)
        {
            system ("cls");
            cout <<"ERROR!" <<endl
                <<"Elige una opcion correcta" <<endl;            
            system ("pause");        
        }//Fin if del error
    }while (Num<1);//Fin do-while del error

    switch(Opc)
    {
        case(1):
            Res = CalcSumaS(Num);
        break;

        case(2):
            Res = CalcFact(Num);
        break;

        case(3):
            cout <<"Ingresa la constante: ";
            cin >>X;
            cout <<endl <<endl;

            Res = CalcSeri(Num,X);
        break;
    }

    return Res;
}//Fin Leer

double CalcSumaS(int Num)
{
    double Res=0;
    for (int i=Num; i>0; i--)
    {
        Res = Res + i;        
    }
    return Res;
}//Fin CalcSumaS

double CalcFact(int Num)
{
    double Res=1;
    for (int i=Num; i>1; i--)
    {
        Res = Res*i;        
    }
    return Res;
}//Fin CalcFact

double CalcSeri(int N, int X)
{
    double Res=0, RT=0;
    int CO=0;

    Res = X+N;
    Res = pow(Res, 2);
    RT = Res = Res/CalcFact(1);
    //Calculo de la primera fraccion

    for (int i=1; i<N; i++)
    {
        if (CO==0)
        {
            Res = X-N;
            Res = pow(Res, i+2);
            Res = Res/CalcFact(i+1);
            RT = RT+Res;

            CO = 1;
        }
        else
        {
            Res = X+N;
            Res = pow(Res, i+2);
            Res = Res/CalcFact(i+1);
            RT = RT-Res;

            CO = 0;
        }
    }

    return RT;
}//Fin CalcSerie
