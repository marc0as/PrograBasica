/*Program19 
Descripcion: Programa para resolver ecuaciones de 2Do grado
             con funciones paso por referencia
Salas Mateos Marco Antonio
PP18042270
1CV18
Periodo 18-1
*/

#include <iostream>//Para uso de cout y cin.
#include <cmath>//Para el uso de M_PI el valor de Pi, pow(variable, potencia)
using namespace std;

void Read(int &RefA, int &RefB, int &RefC);
void Solve(const int &RefA, const double &RefB, const int &RefC, double &RefSol1, double &RefSol2);
void Print(const int &RefA, const int &RefB, const int &RefC, const double &RefSol1, const double &RefSol2);

int main (void)
{
    int A, B, C;
    double X1, X2;
    Read(A, B, C);
    Solve(A, B, C, X1, X2);
    Print(A, B, C, X1, X2);
    system("pause");
    return 1;
}//Fin de la funcion principal

void Read(int &RefA, int &RefB, int &RefC)
{
    cout<<"Ingresa el valor de A: ";
    cin>>RefA;
    cout<<endl <<endl;

    cout<<"Ingresa el valor de B: ";
    cin>>RefB;
    cout<<endl <<endl;

    cout<<"Ingresa el valor de C: ";
    cin>>RefC;
    cout<<endl <<endl;

    system("cls");
}//Fin Read

void Solve(const int &RefA, const double &RefB, const int &RefC, double &RefSol1, double &RefSol2)
{
    double Solu;
    Solu = pow(RefB, 2);
    Solu = Solu-(4*RefA*RefC);
    Solu = sqrt(Solu);
    
    RefSol1 = -RefB+Solu;
    RefSol1 = RefSol1/(2*RefA);

    RefSol2 = -RefB-Solu;
    RefSol2 = RefSol2/(2*RefA);
}//Fin Solve

void Print(const int &RefA, const int &RefB, const int &RefC, const double &RefSol1, const double &RefSol2)
{
    cout<<"Las soluciones para la ecuacion:" <<endl <<endl

        <<RefA <<"x^2 + " <<RefB <<"x + "<<RefC <<" = 0"<<endl <<endl

        <<"Son:" <<endl <<endl

        <<"X1 = " <<RefSol1 <<"   y   " <<"X2 = " <<RefSol2 <<endl <<endl;
}//Fin Print
