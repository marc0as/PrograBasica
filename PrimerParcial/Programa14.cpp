/*Programa 14
Descripcion: Programa para 5 casos
             utilizando for con funciones vacias
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

void Menu(void);
void CalcSumaS(void);
void CalcFact(void);
void MakeHstgr(void);
void MakeSerie(void);

int main (void)
{
    int Num, Opc;
    double Res, Nume, Cnte, Deno;
    do{//Inicio do-while para repetir       
        do{//Inicio do-while del error
            system ("cls"); 
            
            Menu( );
                 
            cin >>Opc;
            cout <<endl <<endl;
            
            if (Opc<1 || Opc>5)
            {
                cout <<"ERROR!" <<endl
                     <<"Elige una opcion correcta" <<endl;            
                system ("pause");        
            }//Fin if del error
        }while (Opc<1 || Opc>5);//Fin do-while del error
        
        switch (Opc)
        {
               case (1):
                    CalcSumaS( );   
               break;
           
               case (2):
                    CalcFact( );
               break;
           
               case (3):
                    MakeHstgr( );
               break;
           
               case (4):
                    MakeSerie( ); 
               break;
        }//Fin switch
        
        if (Opc!=5)
           system("pause");
        
    }while (Opc!=5);//Fin do-while repetir
    
    return 1;
}//Fin de la funcion principal

void Menu(void)
{
    cout <<"Operaciones Matematicas" <<endl <<endl
    
         <<"1.- Suma sucesiva" <<endl
         <<"2.- Factorial" <<endl
         <<"3.- Histograma" <<endl
         <<"4.- Series" <<endl
         <<"5.- Salir" <<endl <<endl
         
         <<"Selecciona una opcion:  " <<endl;
}

void CalcSumaS(void)
{
    int Num;
    double Res;
    cout <<"Ingresa un valor: ";
    cin >>Num;
    cout <<endl;
    
    Res=0;
    for (int i=Num; i>0; i--)
    {
        Res = Res + i;        
    }
    cout <<"E" <<Num <<" = ";
    
    for (int i=Num; i>0; i--)
    {
        cout <<i;
        if (i!=1)
           cout <<" + ";
    }
    cout <<" = " <<Res <<endl <<endl;  
}

void CalcFact(void)
{
    int Num;
    double Res;
    cout <<"Ingresa un valor: ";
    cin >>Num;
    cout <<endl;
    
    Res=1;
    for (int i=Num; i>1; i--)
    {
        Res = Res*i;        
    }
    cout <<Num <<"!" <<" = ";
    
    for (int i=Num; i>0; i--)
    {
        cout <<i;
        if (i!=1)
           cout <<" X ";     
    }
    cout <<" = " <<Res <<endl <<endl;
}

void MakeHstgr(void)
{
    int Num;
    cout <<"Ingresa un valor: ";
    cin >>Num;
    cout <<endl;
    
    for (int j=Num; j>0; j--)
    {
        cout <<j <<"\t";
        for (int i=0; i<j; i++)
        {
            cout <<"*";
        }
        cout <<endl;
    }
    cout <<endl;
}

void MakeSerie(void)
{
    int Num;
    double Res, Nume, Deno, Cnte;
    cout <<"Ingresa la constante: ";
    cin >>Cnte;
    cout <<endl;
    
    cout <<"Ingresa N: ";
    cin >>Num;
    cout <<endl <<endl;
    
    Res=0;
    for (int j=1; j<=Num; j++)
    {
        Nume = pow(Cnte,j+1);
        
        Deno=1;
        
        for (int i=j; i>1; i--)
        {
            Deno = Deno*i;        
        }    
        Res = Res + (Nume/Deno);   
    }
    cout <<"RT" <<" = " <<Res <<endl <<endl;
}
