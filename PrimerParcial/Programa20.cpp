/*Programa 6
    Descripcion: Programa para usar
                ciclos
    Salas Mateos Marco Antonio
    PP18042270
    1CV18
    Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
using namespace std;

void Menu(int &RefOpc);
void Print100(void);
void Print20(void);
void Print5_5(void);
void PrintTab1_100(void);

int main (void)
{
    int Opc;
    do{
        Menu(Opc);        
        if(Opc!=5)
        {
            switch (Opc)
            {
                case (1):
                    Print100( );
                break;
                
                case (2):
                    Print20( );
                break;
                
                case (3):
                    Print5_5( );
                break;
    
                case (4):
                    PrintTab1_100( );                   
                break;
            }//Cierra switch
            system ("pause");
        }//Cierra if        
    }while(Opc!=5);//Cierra do while        
    return 1;
}//Fin de la funcion principal

void Menu(int &RefOpc)
{
    do{//Inicio do-while del error
        system ("cls");    
        cout<<"Ciclos" <<endl <<endl
    
            <<"1.- Imprime del 1 al 100" <<endl
            <<"2.- Imprime del 20 al 1" <<endl
            <<"3.- Imprime del 0 al 100 de 5 en 5" <<endl
            <<"4.- Imprime del 1 al 100 en bloques de 10" <<endl
            <<"5.- Salir" <<endl <<endl
            
            <<"Selecciona una opcion:  " <<endl;
                
        cin>>RefOpc;
        cout<<endl <<endl;
    
        if (RefOpc<1 || RefOpc>5)
        {
            system ("cls");
            cout<<"ERROR!" <<endl
                <<"Elige una opcion correcta" <<endl;            
            system ("pause");        
        }//Fin if del error
    }while (RefOpc<1 || RefOpc>5);//Fin do-while del error
}//Fin Menu

void Print100(void)
{
    int Var[100];
    for (int i=0; i<100; i++)
        Var[i]=i+1;
    for (int i=0; i<100; i++)
        cout<<Var[i] <<endl;
    cout<<endl;
}//Fin Print100

void Print20(void)
{
    int Var[20];
    for (int i=20; i>0; i--)
        Var[i-1]=i;
    for (int i=20; i>0; i--)
        cout<<Var[i-1] <<endl;
    cout<<endl;
}//Fin Print20

void Print5_5(void)
{
    int Var[21];
    for (int i=0; i<21; i++)
        Var[i]=i*5;
    for (int i=0; i<21; i++)
        cout<<Var[i] <<endl;
    cout<<endl;
}//Fin Print5_5

void PrintTab1_100(void)
{
    int Var[100];
    for (int i=0; i<100; i++)
        Var[i]=i+1;
    for (int j=0; j<10; j++)
    {                       
        for (int i=0; i<10; i++)                                                 
            cout<<Var[j*10+i] <<"\t";        
        cout<<endl;                                                            
    }//Fin for j
    cout<<endl;
}//Fin PrintTab1_100
