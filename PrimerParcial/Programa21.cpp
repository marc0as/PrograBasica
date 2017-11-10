/*Programa
    Descripcion: Programa para

    Salas Mateos Marco Antonio
    PP18042270
    1CV18
    Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

void Leer(int Var[10]);
void Imprimir(int Var[10]);
int CalcMayor(int Var[10]);
void OrdenarArregloAtoD(int Var[10]);

int main (void)
{
    int Var[10];
    Leer(Var);    
    system("cls");
    Imprimir(Var);    
    system("pause");
    return 1;
}//Fin de la funcion principal

void Leer(int Var[10])
{
    for(int i=0; i<10; i++)
    {
        cout<<"Ingresa tu elemento " <<i+1 <<": ";
        cin>>Var[i];
        cout<<endl;
    }
}//Fin Leer

void Imprimir(int Var[10])
{
    for(int i=0; i<10; i++)
    {
        cout<<"El elemento Var[" <<i <<"] contiene: " <<Var[i] <<endl <<endl;
    }

    cout<<"Y el valor mas grande es: "<<CalcMayor(Var) <<endl <<endl;

    OrdenarArregloAtoD(Var);

    cout<<"Ordenando los valores de Mayor a Menor" <<endl <<endl;

    for(int i=0; i<10; i++)
    {
        cout<<"El elemento Var[" <<i <<"] contiene: " <<Var[i] <<endl <<endl;
    }

}//Fin Imprimir

int CalcMayor(int Var[10])
{
    int Mayor = Var[0];    
    for(int i=1; i<10; i++)
    {
        if(Mayor<Var[i])
        {
            Mayor = Var[i];            
        }
    }
    return Mayor;
}//FIn CalcSuma

void OrdenarArregloAtoD(int Var[10])
{
    int Aux;
    for(int j=0; j<9; j++)
        for(int i=j+1; i<10; i++)
            if(Var[j]<Var[i])
            {
                Aux = Var[i];
                Var[i] = Var[j];
                Var[j] = Aux;
            }
}//Fin OrdenarArreglo Ascendente
