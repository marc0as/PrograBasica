/*Programa 16
Descripcion: Programa para 5 casos
             utilizando for y funciones paso por referencia
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

int main (void)
{
    int Num, Opc;
    double Res, Nume, Cnte, Deno;
    do{//Inicio do-while para repetir       
        do{//Inicio do-while del error
            system ("cls"); 
            
            cout <<"Operaciones Matematicas" <<endl <<endl
            
                 <<"1.- Suma sucesiva" <<endl
                 <<"2.- Factorial" <<endl
                 <<"3.- Histograma" <<endl
                 <<"4.- Series" <<endl
                 <<"5.- Salir" <<endl <<endl
                 
                 <<"Selecciona una opcion:  " <<endl;
                 
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
               break;
           
               case (2):
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
               break;
           
               case (3):
                    cout <<"Ingresa un valor: ";
                    cin >>Num;
                    cout <<endl;
                    
                    for (int j=Num; j>0; j--)
                    {
                        cout <<j <<" ";
                        for (int i=0; i<j; i++)
                        {
                            cout <<"*";
                        }
                        cout <<endl;
                    }
                    cout <<endl;
               break;
           
               case (4):
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
               break;
        }//Fin switch
        
        if (Opc!=5)
           system("pause");
        
    }while (Opc!=5);//Fin do-while repetir
    
    return 1;
}//Fin de la funcion principal
