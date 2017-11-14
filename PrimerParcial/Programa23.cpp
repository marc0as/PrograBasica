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

void Read(string &Name, double Alum[5]);
void Print(string Name1, string Name2, string Name3, double Alum1[5], double Alum2[5], double Alum3[5]);
void CalcSP(double Alum[5]);
int CalcMR(double Alum[5]);

int main (void)
{
    string Name1, Name2, Name3;
    double Alum1[5], Alum2[5], Alum3[5];
    Read(Name1,Alum1);
    Read(Name2,Alum2);
    Read(Name3,Alum3);
    Print(Name1,Name2,Name3,Alum1,Alum2,Alum3);
    system("pause");
    return 1;
}//Fin de la funcion principal

void Read(string &Name, double Alum[5])
{
    cout<<"Ingresa tu nombre completo: ";
    fflush(stdin);
    getline(cin, Name);
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"Ingresa la calificacion " <<i+1 <<": ";
        cin>>Alum[i];
    }
    cout<<endl <<endl;
    system("cls");
}//Fin Read

void Print(string Name1, string Name2, string Name3, double Alum1[5], double Alum2[5], double Alum3[5])
{
    CalcSP(Alum1);
    CalcSP(Alum2);
    CalcSP(Alum3);

    cout<<Name1 <<": " <<Alum1[0] <<", " <<Alum1[1] <<", " <<Alum1[2] <<endl
        <<"Sumatoria: " <<Alum1[3] <<endl
        <<"Promedio: " <<Alum1[4] <<endl
        <<"Materias reprobadas: " <<CalcMR(Alum1) <<endl <<endl

        <<Name2 <<": " <<Alum2[0] <<", " <<Alum2[1] <<", " <<Alum2[2] <<endl
        <<"Sumatoria: " <<Alum2[3] <<endl
        <<"Promedio: " <<Alum2[4] <<endl
        <<"Materias reprobadas: " <<CalcMR(Alum2) <<endl <<endl

        <<Name3 <<": " <<Alum3[0] <<", " <<Alum3[1] <<", " <<Alum3[2] <<endl
        <<"Sumatoria: " <<Alum3[3] <<endl
        <<"Promedio: " <<Alum3[4] <<endl
        <<"Materias reprobadas: " <<CalcMR(Alum3) <<endl <<endl;
}//Fin Print

void CalcSP(double Alum[5])
{
    Alum[3]=0;
    for(int i=0; i<3; i++)
        Alum[3]=Alum[3]+Alum[i];
    Alum[4]=Alum[3]/3;
}//CalcSP

int CalcMR(double Alum[5])
{
    int NMR=0;
    for(int i=0; i<3; i++)
        if(Alum[i]<6)
            NMR++;
    return NMR;
}//Fin CalcMR
