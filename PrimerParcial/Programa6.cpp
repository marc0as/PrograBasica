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

int main (void)
{
    int Opc, Hist, Bloq=1 ;

    do{
        system ("cls");
        
        cout<<"Ciclos" <<endl <<endl
        
            <<"1.- Imprime 10 veces tu nombre" <<endl
            <<"2.- Imprime del 1 al 100" <<endl
            <<"3.- Imprime del 20 al 1" <<endl
            <<"4.- Imprime del 0 al 100 de 5 en 5" <<endl
            <<"5.- Histograma" <<endl
            <<"6.- Imprime del 1 al 100 en bloques de 10" <<endl
            <<"7.- Imprime del 1 al 100 en bloques de 10" <<endl
            <<"8.- Salir" <<endl <<endl
            
            <<"Selecciona una opcion:  " <<endl;
                
        cin>>Opc;
        cout<<endl <<endl;
        
        switch (Opc)
        {
            case (1):
                    for (int i=0; i<10; i++)
                    {
                        cout<<"Marco Antonio Salas Mateos" <<endl;
                    }
                    cout <<endl;
            break;
            
            case (2):
                    for (int i=0; i<100; i++)
                    {
                        cout<<i+1 <<endl;
                    }
                    cout<<endl;
            break;
            
            case (3):
                    for (int i=20; i>0; i--)
                    {
                        cout<<i <<endl;
                    }
                    cout<<endl;
            break;
            
            case (4):
                    for (int i=0; i<=100; i+=5)
                    {
                        cout<<i <<endl;
                    }
                    cout<<endl;
            break;
            
            case (5):
                    cout<<"Ingresa un numero" <<endl;
                    cin>>Hist;
                    cout<<endl <<endl;
                    
                    for (int i=0; i<Hist; i++) 
                    {
                        cout <<"*  ";
                    }
                    cout<<endl <<endl;
            break;
            
            case(6):
                    for (int j=0; j<10; j++)
                    {                       
                        for (int i=0; i<10; i++)
                        {                                                    
                            cout<<Bloq++ <<"\t";
                        }//Fin for i
                        
                        cout<<endl;
                                                                            
                    }//Fin for j
                    cout<<endl;
                    
                    Bloq=1;                   
            break;
            
            case(7):
                    for (int j=0; j<10; j++)
                    {                       
                        for (int i=0; i<10; i++)
                        {                                                    
                            cout<<j*10+i+1 <<"\t";                                                      
                        }//Fin for i                       
                        cout<<endl;                                                                         
                    }//Fin for j
                    cout<<endl;                                     
            break;
        }//Cierra switch
        
        if(Opc!=8)
        {
            system ("pause");
        }//Cierra if
        
    }while(Opc!=8);//Cierra do while
        
    return 1;
}//Fin de la funcion principal
